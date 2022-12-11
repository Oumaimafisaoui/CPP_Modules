/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:06:06 by oufisaou          #+#    #+#             */
/*   Updated: 2022/11/09 18:01:45 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Fixed.hpp"

int main( void )
{
        //>>>>>>>>>>Tests to see how the << converts from fixed point that is calculated by constructors to float
        // Fixed a(6);
        // Fixed b (2);
        // std::cout << a.getRawBits() << std::endl;
        
        // std::cout << a << std::endl;

        // std::cout << a.getRawBits() + b.getRawBits() << std::endl;
        // std::cout << a + b << std::endl;

        //>>>>>>>>>>>Tests to demonstrate how operators work

        // Fixed const c(Fixed(2) * Fixed(2)); 

        // std::cout << c.getRawBits() << std::endl;
        // //262144 / 256
        // std::cout << c << std::endl;

        //>>>>>>>>>Subject size

        //b is a constant object
        Fixed a;
        Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
        std::cout << a << std::endl;
        std::cout << ++a << std::endl;
        std::cout << a << std::endl;
        std::cout << a++ << std::endl;
        std::cout << a << std::endl;
        std::cout << b << std::endl;
        std::cout << Fixed::max( a, b ) << std::endl;

}

