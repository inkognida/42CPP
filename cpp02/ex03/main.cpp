/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 16:33:49 by hardella          #+#    #+#             */
/*   Updated: 2022/04/13 16:09:29 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main(void) {
    Point a(0.0f, 0.0f), b(2.0f, 0.0f), c(1.0f, 1.0f);
    Point p1(1.0f, 1.0f), p2(0.0f, 0.5f), p3(-0.1f, 0.0f), p4(-0.1f, -0.1f);

	Point aboba(3.0f, 3.0f);
	std::cout << bsp(a,b,c, aboba) << std::endl;
    std::cout << bsp(a, b, c, p1) << std::endl;
    std::cout << bsp(b, c, a, p1) << std::endl;
    std::cout << bsp(a, b, c, p2) << std::endl;
    std::cout << bsp(a, b, c, p3) << std::endl;
    std::cout << bsp(a, b, c, p4) << std::endl;
    return 0;
}