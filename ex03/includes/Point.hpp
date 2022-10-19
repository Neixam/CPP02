/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambouren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:59:39 by ambouren          #+#    #+#             */
/*   Updated: 2022/10/19 18:59:40 by ambouren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
public:
    Point();
    ~Point();
    Point(float x, float y);
    Point(const Point& other);
    Point&  operator=(const Point& other);
    Fixed   getX() const;
    Fixed   getY() const;
private:
    const Fixed _x;
    const Fixed _y;
};

bool    bsp(const Point a, const Point b, const Point c, const Point point);

#endif
