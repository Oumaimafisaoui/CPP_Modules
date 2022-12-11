/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 22:04:35 by oufisaou          #+#    #+#             */
/*   Updated: 2022/11/14 21:50:51 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <exception>
#include <iostream>

Dog::Dog()
{
    std::cout << "\033[0;35mDog constructor is called" << std::endl;
    this->type = "Dog";
    this->brain = new Brain();
}
Dog::~Dog()
{
    std::cout << "\033[0;35mDog Distructor is called" << std::endl;
    if(this->brain)
        delete brain;
}
Dog::Dog(const Dog& obj)
{
    std::cout << "Dog copy constructor is called" << std::endl;
    this->brain = NULL;
    *this = obj;
}
Dog &Dog::operator=(const Dog& obj)
{
    std::cout << "Dog operator constructor is called" << std::endl;
    if(this != &obj)
    {
        this->type = obj.type;
        delete this->brain; 

        this->brain = new Brain(*obj.brain);
    }
    return *this;
}   

void Dog::makeSound(void) const
{
    std::cout << "Bark" << std::endl;
}
std::string Dog::getType(void) const
{
    return (this->type);
}