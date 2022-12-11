/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:06:11 by oufisaou          #+#    #+#             */
/*   Updated: 2022/11/08 20:56:41 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->fixed = 0;
}
Fixed::~Fixed()
{
    std::cout  << "Distructor called" << std::endl;
}
Fixed::Fixed(const Fixed& obj)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}

Fixed& Fixed::operator=(const Fixed& pos)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->setRawBits(pos.getRawBits());
    return *this;
}

int Fixed::getRawBits(void) const
{   
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fixed);
}
void Fixed::setRawBits(int const raw)
{
    this->fixed = raw;
}

