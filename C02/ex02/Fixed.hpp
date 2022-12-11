/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:06:09 by oufisaou          #+#    #+#             */
/*   Updated: 2022/11/09 20:19:11 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP


#include <string>
#include <iostream>
#include <cmath>

class Fixed{
    private:
        int fixed;
        //it will retain its value till the execution of the program and also
        //it will not accept any change in its value.
        static const int fraction = 8;
    public:
        Fixed();
        ~Fixed();
        Fixed(const int param);
        Fixed(const Fixed& obj);
        Fixed(const float param);

        Fixed& operator=(const Fixed& pos);

        int getRawBits(void) const;
        void setRawBits(int const raw);

        float toFloat(void) const;
        int toInt(void) const;



        //When the operands are classes the Overloading happens
        bool operator>(const Fixed& pos) const;
        bool operator<(const Fixed& pos) const;
        bool operator>=(const Fixed& pos) const;
        bool operator<=(const Fixed& pos) const;
        bool operator==(const Fixed& pos) const;
        bool operator!=(const Fixed& pos) const;

        Fixed operator+(const Fixed& pos) const;
        Fixed operator-(const Fixed& pos) const;
        Fixed operator*(const Fixed& pos) const;
        Fixed operator/(const Fixed& pos) const;
        
        
        Fixed& operator++(void);
        Fixed operator++(int);
        Fixed operator--(int);
        Fixed& operator--(void);

        static Fixed& min(Fixed& obj1, Fixed& obj2); 
        static Fixed& max(Fixed& obj1, Fixed& obj2);

        static const Fixed& min(const Fixed& obj3, const Fixed& obj4); 
        static const Fixed& max(const Fixed& obj3, const Fixed& obj4);
        
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);



#endif