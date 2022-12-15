/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 19:35:57 by oufisaou          #+#    #+#             */
/*   Updated: 2022/12/15 23:20:27 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

#include <iostream>

Span::Span(): N(0)
{
    std::cout << "Default constructor" << std::endl;
}
Span::Span(unsigned int N): N(N)
{
    std::cout << "Constructor for span" << std::endl;
    this->elements.reserve(N);
}
Span::~Span()
{
    std::cout << "Distructor for span" << std::endl;
    this->elements.clear();
}
Span::Span(const Span &obj)
{
    std::cout << "Copy Constructor for span" << std::endl;
    *this = obj;
}

Span &Span::operator=(const Span &obj)
{
    std::cout << "Operator for span" << std::endl;
    this->N = obj.N;
    this->elements = obj.elements;
    return (*this);
}

size_t Span::getN(void) const
{
    return (this->N);
}


void Span::addNumber(int n)
{
    if(elements.size() == N)
        throw std::out_of_range("Span is full");
    elements.push_back(n);
}

unsigned int Span::shortspane(void)
{
    size_t index;

    if(elements.size() < 2)
        throw std::logic_error("Short span error, the vector has less that two elements.");

    std::sort(elements.begin(), elements.end());

    unsigned int shortspan = elements[1] - elements[0];

    for(index = 1; index < elements.size() - 1; ++index)
    {
        unsigned int current_span = elements[index + 1] - elements[index];
        if (current_span < shortspan)
        {
            shortspan = current_span;
        }
    }
    return shortspan;
}

unsigned int Span::longspane(void)
{
    if(elements.size() < 2)
        throw std::logic_error("Short span error.");
    return (*std::max_element(elements.begin(), elements.end()) - *std::min_element(elements.begin(), elements.end()));
}