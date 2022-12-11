/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 21:57:06 by oufisaou          #+#    #+#             */
/*   Updated: 2022/11/13 23:01:05 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Constructor for Animal is called" << std::endl;
    this->type = "Animal";
}
Animal::~Animal()
{
    std::cout << "Distructor for Animal is called" << std::endl;
}
Animal::Animal(const Animal &obj)
{
    std::cout << "Animal copy constructor is called" << std::endl;
    *this = obj;
}
Animal& Animal::operator=(const Animal& obj)
{
    std::cout << "Animal operator is called" << std::endl;
    this->type = obj.type;
    return (*this);
}

void Animal::makeSound(void) const     //const because the animal is const
{
    std::cout << "Some sound" << std::endl;
}

std::string Animal::getType(void) const
{
    return (this->type);
}