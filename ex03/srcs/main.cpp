/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambouren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:59:30 by ambouren          #+#    #+#             */
/*   Updated: 2022/10/19 18:59:30 by ambouren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main()
{
    Point A(1, 0);
    Point B(0, 1);
    Point C(1, 1);
    Point m(2, 0.5);
    Point n(1, 1);

    std::cout << (bsp(A, B, C, m) ? "IN" : "OUT") << std::endl;
    std::cout << (bsp(A, B, C, n) ? "IN" : "OUT") << std::endl;
    return (0);
}