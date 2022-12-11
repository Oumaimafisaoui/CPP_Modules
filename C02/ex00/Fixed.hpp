/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:06:09 by oufisaou          #+#    #+#             */
/*   Updated: 2022/11/08 20:56:34 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP


#include <string>
#include <iostream>

class Fixed{
    private:
        int fixed;
        static const int fraction = 8;
    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed& obj);
        Fixed& operator=(const Fixed& pos);
        int getRawBits(void) const;
        void setRawBits(int const raw);
};





#endif