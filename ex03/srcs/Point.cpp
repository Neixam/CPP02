/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambouren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:59:22 by ambouren          #+#    #+#             */
/*   Updated: 2022/10/19 18:59:23 by ambouren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(), _y()
{
}

Point::~Point()
{
}

Point::Point(float x, float y) : _x(x), _y(y)
{
}

Point::Point(const Point &other) : _x(other.getX()), _y(other.getY())
{
}

Fixed Point::getX() const
{
    return _x;
}

Fixed Point::getY() const
{
    return _y;
}

Point& Point::operator=(const Point &other)
{
    if (this == &other)
        return *this;
    return *this;
}
