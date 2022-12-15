/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 21:21:32 by oufisaou          #+#    #+#             */
/*   Updated: 2022/12/15 21:21:35 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>
#include <deque>
#include "MutantStack.hpp"

int main()
{
    MutantStack<int> a;

    a.push(1);
    a.push(1);
    a.push(1);
    a.push(20);

    MutantStack<int>::iterator i;

    for(i = a.begin(); i != a.end(); i++)
    {
        std::cout << *i << std::endl;
    }
}