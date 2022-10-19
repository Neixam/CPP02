/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambouren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:59:26 by ambouren          #+#    #+#             */
/*   Updated: 2022/10/19 18:59:26 by ambouren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed   sign(const Point& p1, const Point& p2, const Point& p3)
{
    return ((p1.getX() - p3.getX()) * (p2.getY() - p3.getY())
        - (p2.getX() - p3.getX()) * (p1.getY() - p3.getY()));
}

bool    bsp(const Point a, const Point b, const Point c, const Point point)
{
    Fixed    how, d1(sign(point, a, b)), d2(sign(point, b, c)),
        d3(sign(point, c, a));

    return !((d1 < how || d2 < how || d3 < how) && (d1 > how || d2 > how || d3 > how));
}