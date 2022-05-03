/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 12:27:30 by hardella          #+#    #+#             */
/*   Updated: 2022/04/25 11:18:10 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(void) {}

Convert::Convert(std::string _input): input(_input), nan(false), posInf(false), negInf(false) {
	if (input == "nan" || input == "nanf")
		nan = true;
	else if (input == "+inf" || input == "+inff")
		posInf = true;
	else if (input == "-inf" || input == "-inff")
		negInf = true;
}

Convert::Convert(const Convert &_data) { *this = _data; }

Convert::~Convert(void) {}

Convert&	Convert::operator=(const Convert &_data)
{
	if (this == &_data)
		return *this;
	this->input = _data.input;
	this->nan = _data.nan;
	this->posInf = _data.posInf;
	this->negInf = _data.posInf;
	return *this;
}

void	Convert::print(void) const 
{
	outChar();
	outInt();
	outFloat();
	outDouble();
}

void	Convert::outChar(void) const
{
	if (input.size() == 1 && isalpha(input[0])) { 
		std::cout << "char: " << static_cast<char>(input[0]) << std::endl; return ; }
	
	for (size_t i = 0; i < input.size(); i++) {
		if (input[i] == '.' || (input[i] == 'f' && i == input.size() - 1 && input.size() > 2) || \
			((input[i] == '+' || input[i] == '-') && i == 0))
			continue ;
		if (!isdigit(input[i])) {
			std::cout << "char: Non displayable" << std::endl; return ; }
	}
	if (input[0] == '.' || (input[1] == '.' && !isdigit(input[2]))) {
		std::cout << "char: Non displayable" << std::endl; return ; }
	
	long int c = std::strtol(input.c_str(), nullptr, 10);
	if (isprint(c))
		std::cout << "char: " << static_cast<char>(c) << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	return ;
}

void	Convert::outInt(void) const
{
	for (size_t i = 0; i < input.size(); i++) {
		if (input[i] == '.' || (input[i] == 'f' && i == input.size() - 1 && input.size() > 2) || \
			((input[i] == '+' || input[i] == '-') && i == 0))
			continue ;
		if (!isdigit(input[i])) {
			std::cout << "int: Non displayable" << std::endl; return ; }
	}
	if (input[0] == '.' || (input[1] == '.' && !isdigit(input[2]))) {
		std::cout << "int: Non displayable" << std::endl; return ; }

	long int i = std::strtol(input.c_str(), nullptr, 10);
	if (i > INT_MAX || i < INT_MIN) {
		std::cout << "int: Non displayable" << std::endl; return ; }
		
	std::cout << "int: " << static_cast<int>(i) << std::endl;
	return ;
}

void	Convert::outFloat(void) const
{
	if (nan) { std::cout << "float: nanf" << std::endl; return; }
	else if (posInf) { std::cout << "float: +inff" << std::endl; return; }
	else if (negInf) { std::cout << "float: -inff" << std::endl; return; }
	for (size_t i = 0; i < input.size(); i++) {
		if (input[i] == '.' || (input[i] == 'f' && i == input.size() - 1 && input.size() > 2) || \
		((input[i] == '+' || input[i] == '-') && i == 0))
			continue ;
		if (!isdigit(input[i])) {
			std::cout << "float: Non displayable" << std::endl; return ; }
	}
	if (input[0] == '.' || (input[1] == '.' && !isdigit(input[2]))) {
		std::cout << "float: Non displayable" << std::endl; return ; }
	double f = strtod(input.c_str(), NULL); 
	if (f > __FLT_MAX__ || f < -__FLT_MAX__){
		std::cout << "float: Non displayable" << std::endl; return ; }
		
	if (atof(input.c_str()) - atoi(input.c_str()) == 0.0f){
		std::cout << "float: " << static_cast<float>(f) << ".0f" << std::endl; 
	}
	else{
		std::cout << "float: " << static_cast<float>(f) << "f" << std::endl;
	}
}

void	Convert::outDouble(void) const
{
	if (nan) { std::cout << "double: nan" << std::endl; return; }
	else if (posInf) { std::cout << "double: +inf" << std::endl; return; }
	else if (negInf) { std::cout << "double: -inf" << std::endl; return; }
	for (size_t i = 0; i < input.size(); i++) {
		if (input[i] == '.' || (input[i] == 'f' && i == input.size() - 1 && input.size() > 2) || \
		((input[i] == '+' || input[i] == '-') && i == 0))
			continue ;
		if (!isdigit(input[i])) {
			std::cout << "double: Non displayable" << std::endl; return ; }
	}
	if (input[0] == '.' || (input[1] == '.' && !isdigit(input[2]))) {
		std::cout << "double: Non displayable" << std::endl; return ; }
	double d = strtod(input.c_str(), NULL); 
	if (d > std::numeric_limits<double>::max() || d < std::numeric_limits<double>::lowest()){
			std::cout << "double: Non displayable" << std::endl; return ; }
	if (atof(input.c_str()) - atoi(input.c_str()) == 0.0f){
		std::cout << "double: " << static_cast<double>(d) << ".0" << std::endl; 
	}
	else{
		std::cout << "double: " << static_cast<double>(d) << std::endl;
	}
}