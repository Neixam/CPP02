/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambouren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:44:36 by ambouren          #+#    #+#             */
/*   Updated: 2022/10/19 15:44:37 by ambouren         ###   ########.fr       */
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
    Fixed&  operator=(const Fixed& other);
    int     getRawBits() const;
    void    setRawBits(int rawBits);
private:
    const static int    _NB_BITS = 8;
    int                 _rawBits;
};

std::ostream&   operator<<(std::ostream& os, const Fixed& obj);


#endif
