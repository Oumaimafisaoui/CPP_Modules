/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 16:28:12 by oufisaou          #+#    #+#             */
/*   Updated: 2022/12/03 18:29:37 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>

void Display(T const &x) 
{ 
    std::cout << x << std::endl; 
    return; 
}

int main()
{
    int tab[] = {0, 1, 2, 3, 4 }; 
    iter(tab, 5, Display<int>);
    return 0;
}
