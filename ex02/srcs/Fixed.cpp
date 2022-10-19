/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambouren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 17:12:08 by ambouren          #+#    #+#             */
/*   Updated: 2022/10/19 17:12:09 by ambouren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

const static std::string RED = "\033[31m";
const static std::string GREEN = "\033[32m";
const static std::string NEUTRAL = "\033[0m";
const static std::string YELLOW = "\033[33m";

int Fixed::getRawBits() const
{
    return _rawBits;
}

Fixed &Fixed::operator=(const Fixed &other)
{
    if (this == &other)
        return *this;
    _rawBits = other.getRawBits();
    return *this;
}

Fixed::Fixed(const Fixed &fixed)
{
    *this = fixed;
}

Fixed::Fixed()
{
    _rawBits = 0;
}

Fixed::~Fixed()
{
}

void Fixed::setRawBits(int rawBits)
{
    _rawBits = rawBits;
}

Fixed::Fixed(int value)
{

    _rawBits = value << _NB_BITS;
}

Fixed::Fixed(float value)
{
    _rawBits = (int)roundf(value * (1 << _NB_BITS));
}

int Fixed::toInt() const
{
    return _rawBits >> _NB_BITS;
}

float Fixed::toFloat() const
{
    return (float)_rawBits / (1 << _NB_BITS);
}

Fixed &Fixed::operator++()
{
    _rawBits++;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed old(*this);

    operator++();
    return old;
}

Fixed &Fixed::operator--()
{
    _rawBits--;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed old(*this);

    operator--();
    return old;
}

Fixed Fixed::max(const Fixed &fixed1, const Fixed &fixed2)
{
    if (fixed1 > fixed2)
        return fixed1;
    return fixed2;
}

Fixed Fixed::max(Fixed &fixed1, Fixed &fixed2)
{
    if (fixed1 > fixed2)
        return fixed1;
    return fixed2;}

Fixed Fixed::min(const Fixed &fixed1, const Fixed &fixed2)
{
    if (fixed1 < fixed2)
        return fixed1;
    return fixed2;
}

Fixed Fixed::min(Fixed &fixed1, Fixed &fixed2)
{
    if (fixed1 < fixed2)
        return fixed1;
    return fixed2;
}

std::ostream&   operator<<(std::ostream& os, const Fixed& obj)
{
    os << obj.toFloat();
    return (os);
}

bool    operator<(const Fixed &lfx, const Fixed &rfx)
{
    return lfx.getRawBits() < rfx.getRawBits();
}

bool operator==(const Fixed &lfx, const Fixed &rfx)
{
    if (&lfx == &rfx)
        return true;
    return lfx.getRawBits() == rfx.getRawBits();
}

bool operator>=(const Fixed &lfx, const Fixed &rfx)
{
    if (&lfx == &rfx)
        return true;
    return lfx.getRawBits() >= rfx.getRawBits();
}

bool operator>(const Fixed &lfx, const Fixed &rfx)
{
    return lfx.getRawBits() > rfx.getRawBits();
}

bool operator<=(const Fixed &lfx, const Fixed &rfx)
{
    if (&lfx == &rfx)
        return true;
    return lfx.getRawBits() <= rfx.getRawBits();
}

bool operator!=(const Fixed &lfx, const Fixed &rfx)
{
    if (&lfx == &rfx)
        return false;
    return lfx.getRawBits() != rfx.getRawBits();
}

Fixed operator+(const Fixed &a, const Fixed &b)
{
    return Fixed(a.toFloat() + b.toFloat());
}

Fixed operator*(const Fixed &a, const Fixed &b)
{
    return Fixed(a.toFloat() * b.toFloat());
}

Fixed operator-(const Fixed &a, const Fixed &b)
{
    return Fixed(a.toFloat() - b.toFloat());
}

Fixed operator/(const Fixed &a, const Fixed &b)
{
    return Fixed(a.toFloat() / b.toFloat());
}
