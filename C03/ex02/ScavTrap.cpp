/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:49:57 by oufisaou          #+#    #+#             */
/*   Updated: 2022/11/13 11:06:15 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/**********************  Orthodox canonical class form **********************/

ScavTrap::ScavTrap(const ScavTrap& obj)
{
    std::cout << "Copy constructor of ScavTrap is called!" << std::endl;
    *this = obj;
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "ScavTrap parametrized constructor called" << std::endl;
    this->name = name;
    this->Attack = 20;
    this->EnergyPoints = 50;
    this->HitPoint = 100;
}

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap constructor called" << std::endl;
    this->name = "default";
    this->Attack = 20;
    this->EnergyPoints = 50;
    this->HitPoint = 100;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor is called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &obj)
{
    std::cout << "Operator overloader called for ScavTrap" << std::endl;
    this->name = obj.name;
    this->Attack = obj.Attack;
    this->EnergyPoints = obj.EnergyPoints;
    this->HitPoint = obj.HitPoint;
    return (*this);
}
/**********************  Function guardGate **********************/

void ScavTrap::guardGate()
{
    if(HitPoint >= 1)
        std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
    return ;
}

/**********************  Function attack **********************/


void ScavTrap::attack(const std::string& target)
{
    if(this->EnergyPoints >= 1 && this->HitPoint >= 1)
    {
        std::cout << "ScavTrap " << this->name << " attacks " << target 
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