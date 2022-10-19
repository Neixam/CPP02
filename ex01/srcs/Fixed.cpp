/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambouren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:44:42 by ambouren          #+#    #+#             */
/*   Updated: 2022/10/19 15:44:42 by ambouren         ###   ########.fr       */
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
    std::cout << YELLOW << "Copy assignment operator called" << NEUTRAL << std::endl;
    if (this == &other)
        return *this;
    _rawBits = other.getRawBits();
    return *this;
}

Fixed::Fixed(const Fixed &fixed)
{
    std::cout << GREEN << "Copy constructor called" << NEUTRAL << std::endl;
    *this = fixed;
}

Fixed::Fixed()
{
    std::cout << GREEN << "Default constructor called" << NEUTRAL << std::endl;
    _rawBits = 0;
}

Fixed::~Fixed()
{
    std::cout << RED << "Destructor called" << NEUTRAL << std::endl;
}

void Fixed::setRawBits(int rawBits)
{
    _rawBits = rawBits;
}

Fixed::Fixed(int value)
{
    std::cout << GREEN << "Int constructor called" << NEUTRAL << std::endl;

    _rawBits = value << _NB_BITS;
}

Fixed::Fixed(float value)
{
    std::cout << GREEN << "Float constructor called" << NEUTRAL << std::endl;
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

std::ostream&   operator<<(std::ostream& os, const Fixed& obj)
{
    os << obj.toFloat();
    return (os);
}