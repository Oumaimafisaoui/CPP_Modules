/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 21:21:55 by oufisaou          #+#    #+#             */
/*   Updated: 2022/12/15 23:46:46 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <stack>
#include <iostream>
#include <deque>
template <typename T>

class MutantStack : public std::stack<T>
{
    public:
        MutantStack();
        ~MutantStack();  
        MutantStack(const MutantStack &obj);
        MutantStack& operator=(const MutantStack &obj);
     
        // use the underlying containcer iterators to iterate on stack

        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;
        
        // code begin and end for the iterators to return an iterator
        iterator begin()
        {
            return (std::stack<T>::c.begin());
        }
        iterator end()
        {
            return (std::stack<T>::c.end());
        }
        const_iterator cbegin()
        {
            return (std::stack<T>::c.cbegin());
        }
        const_iterator cend()
        {
            return (std::stack<T>::c.cend());
        }
};


#include "MutantStack.tpp"


#endif