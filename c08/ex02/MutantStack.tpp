/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 20:15:10 by oufisaou          #+#    #+#             */
/*   Updated: 2022/12/15 21:09:33 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_TPP
#define MUTANTSTACK_TPP
#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack()
{
    std::cout << "Constructor called" << std::endl;
}

template <typename T>
MutantStack<T>::~MutantStack()
{
    std::cout << "Distructor called" << std::endl;
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &obj)
{
    std::cout << "Copy Constructor called" << std::endl;
    *this=obj;
}

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack &obj)
{
    std::stack<T>::operator=(obj);
}
#endif