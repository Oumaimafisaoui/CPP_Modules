/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 10:40:59 by oufisaou          #+#    #+#             */
/*   Updated: 2022/11/13 15:06:42 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


/**********************  Orthodox canonical class form **********************/

FragTrap::FragTrap(std::string name)
{
     std::cout << "FragTrap parametrized constructor called" << std::endl;
    this->name = name;
    this->Attack = 30;
    this->EnergyPoints = 100;
    this->HitPoint = 100;
}

FragTrap::FragTrap(const FragTrap& obj)
{
     std::cout << "Copy constructor of FragTrap is called!" << std::endl;
    *this = obj;
}

FragTrap::~FragTrap()
{
    std::cout << "Distructer for FragTrap is called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& obj)
{
    std::cout << "Operator overloader called for FragTrap" << std::endl;
    this->name = obj.name;
    this->Attack = obj.Attack;
    this->EnergyPoints = obj.EnergyPoints;
    this->HitPoint = obj.HitPoint;
    return (*this);
}

FragTrap::FragTrap()
{
    std::cout << "FragTrap default constructor called" << std::endl;
    this->name = "default";
    this->Attack = 30;
    this->EnergyPoints = 100;
    this->HitPoint = 100;
}
/**********************  Function attack **********************/


void FragTrap::attack(const std::string& target)
{
    if(this->EnergyPoints >= 1 && this->HitPoint >= 1)
    {
        std::cout << "FragTrap " << this->name << " attacks " << target 
        << " ,causing " << this->Attack 
        << " points of damage!" << std::endl;
        this->EnergyPoints--;
        std::cout << "The current Energy points are: " << this->EnergyPoints << std::endl;
    }
    else
    {
         std::cout << "Sorry no enough energy points to continue!" << std::endl;
    }
    return ;
}

/**********************  Function FragTrap **********************/

 void FragTrap::highFivesGuys(void)
 {
    if(this->HitPoint >= 1)
        std::cout << this->name << " Gives high fives to the rooooom!" << std::endl;
    return ;
 }