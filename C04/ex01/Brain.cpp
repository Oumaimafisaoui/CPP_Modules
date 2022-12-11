/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 23:18:21 by oufisaou          #+#    #+#             */
/*   Updated: 2022/11/14 21:18:36 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"


Brain::Brain()
{
    std::cout << "\033[0;31m The Brain is created" << std::endl;
}
Brain::~Brain()
{
    std::cout << "\033[0;31m The Brain is destroyed" << std::endl;
}
Brain::Brain(const Brain& obj)
{
    std::cout << "The Brain is Copied" << std::endl;
    *this = obj;
}
Brain& Brain::operator=(const Brain& obj)
{
    std::cout << "The Brain is operator is called" << std::endl;
    for(int i = 0; i < 100; i++)
    {
            this->ideas[i] = obj.ideas[i];
    }
    return (*this);
}

