/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 19:35:50 by oufisaou          #+#    #+#             */
/*   Updated: 2022/12/15 22:59:19 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <limits>
#include <iostream>
#include <algorithm>
#include <cmath>

class Span{
    private:
        unsigned int N;
        Span();
        std::vector<int> elements;
    public:
        Span(unsigned int N);
        ~Span();
        Span(const Span &obj);
        Span &operator=(const Span &obj);
        size_t getN(void) const;
        void addNumber(int n);
        void bubble_sort(std::vector<int> &vec);

        unsigned int shortspane(void);
        unsigned int longspane(void);
};
#endif