/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 17:28:22 by oufisaou          #+#    #+#             */
/*   Updated: 2022/12/03 14:26:05 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
#include <string>
#include <exception>
//Generic class / family of classes

template <typename T>

class Array{
    private:
        T *arr;
        unsigned int size_it;
    public:
        Array();
        Array(unsigned int size_it);
        ~Array();
        Array &operator=(const Array& obj);
        Array(const Array &obj);
        unsigned int size(void) const;
        T& operator[](unsigned int index);

        class OutOfRange : public std::exception
        {
            public: 
                virtual const char *what () const throw()
                {
                    return ("Problem in acceccing an index is out of bounds");
                }
        };
};


#include "Array.tpp"
#endif