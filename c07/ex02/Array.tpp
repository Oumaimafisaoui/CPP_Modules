/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 11:10:40 by oufisaou          #+#    #+#             */
/*   Updated: 2022/12/03 16:38:22 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
#define ARRAY_TPP

#include "Array.hpp"

template <typename T>

Array<T>::Array()
{
    std::cout << "Constructor is called" << std::endl;
    this->size_it = 0;
    arr = new T[0];
}

template <typename T>
Array<T>::Array(unsigned int size_it)
{
    std::cout << "Parametrized constructor is called" << std::endl;
    this->size_it = size_it;
    arr = new T[size_it];
}

template <typename T>
Array<T>::~Array()
{
    std::cout << "Distructor is called" << std::endl;
    if(this->arr)
        delete arr;
}


template <typename T>

Array<T> &Array<T>::operator=(Array<T> const & obj)
{
    std::cout << "Calling assignment operator" << std::endl; 
    if(this->arr)
        delete this->arr;
    if(obj.size() > 0 && this != &obj)
    {
        this->arr = new T[obj.size()];
  
        for(size_t i = 0; i < obj.size_it; i++)
            this->arr[i] = obj.arr[i];
    }
    this->size_it = obj.size_it; 
    return *this;
}

template <typename T>

Array<T>::Array(const Array<T> &obj)
{
    std::cout << "Calling copy constructor" << std::endl;
    this->arr = NULL;
    *this = obj;
}

template <typename T>

unsigned int  Array<T>::size(void) const
{
    return this->size_it;
}

template <typename T>

T& Array<T>::operator[](unsigned int index)
{
    std::cout << "Try access Array[]" << std::endl;
    if(index > this->size())
        throw OutOfRange();
    return (this->arr[index]);
}
#endif