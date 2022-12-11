/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 21:59:18 by oufisaou          #+#    #+#             */
/*   Updated: 2022/11/14 20:13:22 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << " \033[0;34m Constructor for Cat is called" << std::endl;
    this->type = "Cat";
    this->brain = new Brain();
}
Cat::~Cat()
{
    std::cout << " \033[0;34m Distructor for Cat is called" << std::endl;
    if(this->brain)
        delete brain;
}
Cat::Cat(const Cat& obj)
{
    std::cout << "Copy Constructor for Cat is called" << std::endl;
    this->brain = NULL; //when the brain is created with out initialization
    *this = obj;
}
Cat& Cat::operator = (const Cat& obj)
{
    std::cout << "Operator for Cat is called" << std::endl;
    this->type = obj.type;
    if (this->brain)
        delete brain;
    this->brain = new Brain(*obj.brain);
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


