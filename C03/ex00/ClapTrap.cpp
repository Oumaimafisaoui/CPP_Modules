/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:17:13 by oufisaou          #+#    #+#             */
/*   Updated: 2022/11/13 12:21:47 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


/**********************  Orthodox canonical class form **********************/

ClapTrap::ClapTrap()
{
    std::cout << "Default Constructor called for ClapTrap object" << std::endl;
    this->name = "default";
    this->Attack = 0;
    this->EnergyPoints = 10;
    this->HitPoint = 10;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Constructor called for ClapTrap object" << std::endl;
    this->name = name;
    this->Attack = 0;
    this->EnergyPoints = 10;
    this->HitPoint = 10;
    std::cout << "Hello it is " << name << " here" << std::endl;
}
ClapTrap::~ClapTrap()
{
    std::cout << "Distructor called for ClapTrap object" << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap& obj)
{
    std::cout << "Copy constructor called for ClapTrap object" << std::endl;
    *this = obj;
}
ClapTrap& ClapTrap::operator=(const ClapTrap& obj)
{
    std::cout << "Operator overloader called" << std::endl;
    this->name = obj.name;
    this->Attack = obj.Attack;
    this->EnergyPoints = obj.EnergyPoints;
    this->HitPoint = obj.HitPoint;
    return (*this);
}


/**********************  Function attack  **********************/

void ClapTrap::attack(const std::string& target)
{
    if(this->EnergyPoints >= 1 && this->HitPoint >= 1)
    {

        std::cout << "ClapTrap " << this->name << " attacks " << target 
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


/**********************  Function take damage **********************/

void ClapTrap::takeDamage(unsigned int amount)
{
    if(amount > this->HitPoint)
    {
        this->HitPoint = 0;
        std::cout << "Curent hit point after taking an : " << amount << " of damage is:" << this->HitPoint << std::endl;
        std::cout << "The hitpoints are less than the amount or there are no hit points left" << std::endl;
    }
    else
    {
        this->HitPoint -= amount;
        std::cout << "Curent hit point after taking an : " << amount << " of damage is:" << this->HitPoint << std::endl;
    }
    return ;

}


/**********************  Function beRepaired **********************/


void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "Target tries to repair itself" << std::endl;

    if(this->EnergyPoints >= 1 && this->HitPoint >= 1)
    {
        this->HitPoint += amount;
        this->EnergyPoints--;
        std::cout << " it restaured " << amount << " points" << std::endl;
        std::cout <<"The Hit points number now is : " 
        << this->HitPoint << std::endl;
    }
    else
    {
        std::cout << "ClapTrap could not repair itself it " << this->HitPoint << " hitpoints " << " and "
		<< this->EnergyPoints  << " EnergyPoints " << std::endl; 
    }
}


/**********************  Getters for private attributes  **********************/

std::string ClapTrap::getName(void) const
{
    return (this->name);
}
size_t ClapTrap::getHit(void) const
{
    return (this->HitPoint);
}
size_t ClapTrap::getAttack(void) const
{
    return (this->Attack);
}
size_t ClapTrap::getEnergy(void) const
{
    return (this->EnergyPoints);
}


/**********************  Setters for private attributes **********************/

void ClapTrap::setName(std::string name)
{
    this->name = name;
}
void ClapTrap::setHit(size_t hit)
{
    this->HitPoint = hit;
}
void ClapTrap::setEnergy(size_t energy)
{
    this->EnergyPoints = energy;
}
void ClapTrap::setdamage(size_t damage)
{
    this->Attack = damage;
}