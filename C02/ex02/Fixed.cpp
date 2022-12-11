/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:06:11 by oufisaou          #+#    #+#             */
/*   Updated: 2022/11/09 20:19:05 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"



//............................Constructors.........................//

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

//............................Setter and getter.........................//

int Fixed::getRawBits(void) const //GET THE NUMBER
{   
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fixed);
}
void Fixed::setRawBits(int const raw)  //SET THE NUMBER
{
    this->fixed = raw;
}

//............................Member functions.........................//

float Fixed::toFloat(void) const    //FROM FIXED TO FLOAT
{
    return ((float)this->fixed / (1 << fraction)); //because it prints the value as int without fraction
}
int Fixed::toInt(void) const
{
   return (this->fixed >> fraction); //FROM FIXED TO INT
}

//............................Operator functions : copy constructor = overloader.........................//

Fixed& Fixed::operator=(const Fixed& pos)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->setRawBits(pos.getRawBits());
    return *this;
}
//............................Operator functions : Comparaison operators.........................//

bool Fixed::operator>(const Fixed& pos) const
{
    return (this->fixed > pos.fixed);
}
bool Fixed::operator<(const Fixed& pos) const
{
    return (this->fixed < pos.fixed);
}
bool Fixed::operator>=(const Fixed& pos) const
{
    return (this->fixed >= pos.fixed);
}
bool Fixed::operator<=(const Fixed& pos) const
{
    return (this->fixed <= pos.fixed);
}
bool Fixed::operator==(const Fixed& pos) const
{
    return (this->fixed == pos.fixed);
}
bool Fixed::operator!=(const Fixed& pos) const
{
    return (this->fixed != pos.fixed);   
}

//............................Operator functions : Output  operator.........................//

//fixed to float
std::ostream& operator<<(std::ostream& os, const Fixed& obj) //global because it is mentioned in subject
{
    os << obj.toFloat();
    return os;
}

//............................Operator functions : Arithmitic operators.........................//
Fixed Fixed::operator+(const Fixed& pos) const
{
    Fixed num;
    num.fixed = (this->fixed + pos.fixed);
    return num;
}
Fixed Fixed::operator-(const Fixed& pos) const
{
    Fixed num;
    num.fixed = (this->fixed - pos.fixed);
    return num;
}
Fixed Fixed::operator*(const Fixed& pos) const
{
    Fixed num;
    num.fixed = (this->fixed * pos.fixed) / (1 << this->fraction); //should be converted two times
    return num;
}
Fixed Fixed::operator/(const Fixed& pos) const
{
    Fixed num;
    num.fixed = (this->fixed / pos.fixed);
    return (num.getRawBits());
}


//............................Operator functions : 4 increment decrimment operators.........................//


//---- Preincrimentation -----//

Fixed& Fixed::operator++()
{
    this->fixed++;
    return (*this);
}

Fixed& Fixed::operator--()
{
    this->fixed--;
    return (*this);
}


//----Postincrimentation -----//

Fixed Fixed::operator--(int) //dummy param
{
    Fixed tmp(*this);
    this->fixed--;
    return tmp;
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    this->fixed++;
    return tmp;
}

//..............................Min / Max ............................//

Fixed& Fixed::min(Fixed& obj1, Fixed& obj2)
{
    return (obj1 < obj2 ? obj1 : obj2);
}

Fixed& Fixed::max(Fixed& obj1, Fixed& obj2)
{
    return (obj1 > obj2 ? obj1 : obj2);
}

const Fixed& Fixed::min(const Fixed& obj3, const Fixed& obj4)
{
    return (obj3 < obj4 ? obj3 : obj4);
}

const Fixed& Fixed::max(const Fixed& obj3, const Fixed& obj4)
{
    return (obj3 > obj4 ? obj3 : obj4);
}

