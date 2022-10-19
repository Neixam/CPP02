/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambouren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 17:12:19 by ambouren          #+#    #+#             */
/*   Updated: 2022/10/19 17:12:19 by ambouren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main()
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    std::cout << "1. " << a << std::endl;
    std::cout << "2. " << ++a << std::endl;
    std::cout << "3. " << a << std::endl;
    std::cout << "4. " << a++ << std::endl;
    std::cout << "5. " << a << std::endl;

    std::cout << "6. " << b << std::endl;
    std::cout << "7. " << b * a << std::endl;
    std::cout << "8. " << b + a << std::endl;
    std::cout << "9. " << b - a << std::endl;
    std::cout << "10. " << b / a << std::endl;

    std::cout << "11. " << Fixed::max( a, b ) << std::endl;
    std::cout << "12. " << Fixed::min(a, b) << std::endl;

    std::cout << "13. " << (b == a) << std::endl;
    std::cout << "14. " << (b != a) << std::endl;
    std::cout << "15. " << (b < a) << std::endl;
    std::cout << "16. " << (b <= a) << std::endl;
    std::cout << "17. " << (b >= a) << std::endl;
    std::cout << "18. " << (b > a) << std::endl;
    std::cout << "19. " << (b == b) << std::endl;
    std::cout << "20. " << (b == Fixed(b)) << std::endl;
    return 0;
}
