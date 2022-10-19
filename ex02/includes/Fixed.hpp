/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambouren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 17:12:13 by ambouren          #+#    #+#             */
/*   Updated: 2022/10/19 17:12:14 by ambouren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed
{
public:
    Fixed();
    Fixed(const Fixed& fixed);
    ~Fixed();
    Fixed(int value);
    Fixed(float value);
    float   toFloat() const;
    int     toInt() const;
    Fixed&  operator++();
    Fixed   operator++(int);
    Fixed&  operator--();
    Fixed   operator--(int);
    Fixed&  operator=(const Fixed& other);
    int     getRawBits() const;
    void    setRawBits(int rawBits);
    static Fixed max(const Fixed& fixed1, const Fixed& fixed2);
    static Fixed max(Fixed& fixed1, Fixed& fixed2);
    static Fixed min(const Fixed& fixed1, const Fixed& fixed2);
    static Fixed min(Fixed& fixed1, Fixed& fixed2);
private:
    const static int    _NB_BITS = 8;
    int                 _rawBits;
};

Fixed           operator+(const Fixed &a, const Fixed &b);
Fixed           operator*(const Fixed &a, const Fixed &b);
Fixed           operator-(const Fixed &a, const Fixed &b);
Fixed           operator/(const Fixed &a, const Fixed &b);
bool            operator<(const Fixed& lfx, const Fixed& rfx);
bool            operator<=(const Fixed& lfx, const Fixed& rfx);
bool            operator>(const Fixed& lfx, const Fixed& rfx);
bool            operator>=(const Fixed& lfx, const Fixed& rfx);
bool            operator==(const Fixed& lfx, const Fixed& rfx);
bool            operator!=(const Fixed& lfx, const Fixed& rfx);
std::ostream&   operator<<(std::ostream& os, const Fixed& obj);


#endif
