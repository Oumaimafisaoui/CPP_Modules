/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 23:08:05 by oufisaou          #+#    #+#             */
/*   Updated: 2022/11/13 23:09:17 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() //default constructor
{
  std::cout << "default constructor from WrongAnimal" << std::endl;
  this->type = "wrong animal";
}
WrongAnimal::~WrongAnimal()//Distructor
{
    std::cout << "default destructor from WrongAnimal" << std::endl;
}
WrongAnimal::WrongAnimal(std::string type) //overloading constratctor
{
    std::cout << "parametred constructor called from WrongAnimal" << std::endl;
    this->type = type;
}
WrongAnimal &WrongAnimal::operator=(WrongAnimal const &obj) //operator overloader
{
    std::cout << "= assignment operator from Wrong Animal " << std::endl;
    this->type = obj.type;
    return (*this);
}
WrongAnimal::WrongAnimal(WrongAnimal const &obj)
{
    std::cout << "copy constructor called from WrongAnimal" << std::endl;
    *this = obj;
}


//METHODS
std::string WrongAnimal::getType(void) const
{
    return (this->type);
}
void    WrongAnimal::makeSound(void) const
{   
    std::cout << "Hello I am WrongAnimal" << std::endl;
    return ;
}