/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:06:11 by oufisaou          #+#    #+#             */
/*   Updated: 2022/11/09 20:05:38 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

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

Fixed::Fixed(const int param)
{
    std::cout << "Int constructor called" << std::endl;
    this->fixed = (param << this->fraction);
} 

Fixed::Fixed(const float param)
{
    std::cout << "Float constructor called" << std::endl;
    this->fixed = roundf(param * (1 << this->fraction)); //  the  binary gets shiffted 2.5 example
}

float Fixed::toFloat(void) const
{
    return ((float)this->fixed / (1 << fraction)); //because it prints the value as int without fraction
}

int Fixed::toInt(void) const
{
   return (this->fixed >> fraction);
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj) //<< is an output insertion
{
    os << obj.toFloat();
    return os;
}
