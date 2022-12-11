/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 22:04:35 by oufisaou          #+#    #+#             */
/*   Updated: 2022/11/13 23:04:05 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog constructor is called" << std::endl;
    this->type = "Dog";
}
Dog::~Dog()
{
    std::cout << "Dog Distructor is called" << std::endl;
}
Dog::Dog(const Dog& obj)
{
    std::cout << "Dog copy constructor is called" << std::endl;
    *this = obj;
}
Dog &Dog::operator=(const Dog& obj)
{
    std::cout << "Dog operator constructor is called" << std::endl;
    this->type = obj.type;
    return (*this);
}   

void Dog::makeSound(void) const
{
    std::cout << "Bark" << std::endl;
}
std::string Dog::getType(void) const
{
    return (this->type);
}