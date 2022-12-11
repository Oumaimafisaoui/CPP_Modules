/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 21:59:18 by oufisaou          #+#    #+#             */
/*   Updated: 2022/11/13 23:01:15 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Constructor for Cat is called" << std::endl;
    this->type = "Cat";
}
Cat::~Cat()
{
    std::cout << "Distructor for Cat is called" << std::endl;
}
Cat::Cat(const Cat& obj)
{
    std::cout << "Copy Constructor for Cat is called" << std::endl;
    *this = obj;
}
Cat& Cat::operator=(const Cat& obj)
{
    std::cout << "Operator for Cat is called" << std::endl;
    this->type = obj.type;
    return *this;
}

void Cat::makeSound(void) const
{
    std::cout << "Meao" << std::endl;
}

std::string Cat::getType(void) const
{
    return (this->type);
}