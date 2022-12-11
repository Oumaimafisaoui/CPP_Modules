/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 23:09:41 by oufisaou          #+#    #+#             */
/*   Updated: 2022/11/13 23:09:45 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() //default constructor
{
  std::cout << "default constructor from wrongcat" << std::endl;
  this->type = "Cat";
}
WrongCat::~WrongCat()//Distructor
{
    std::cout << "default destructor  from wrongcat" << std::endl;
}
WrongCat::WrongCat(std::string type) //overloading constratctor
{
    std::cout << "parametred constructor called wrongcat" << std::endl;
    this->type = type;
}
WrongCat &WrongCat::operator=(WrongCat const &obj) //operator overloader
{
    std::cout << "= operator  from wrongcat" << std::endl;
    this->type = obj.getType();
    return (*this);
}
WrongCat::WrongCat(WrongCat const &obj)
{
    std::cout << "copy constructor called wrongcat" << std::endl;
    *this = obj;
}
//METHODS
void    WrongCat::makeSound(void) const
{   
    std::cout << "Hello I am wrongcat" << std::endl;
    return ;
}