/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 17:55:52 by oufisaou          #+#    #+#             */
/*   Updated: 2022/11/08 09:35:58 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    kill = NULL;
    this->name = name;
    std::cout << "HumanB is created" << std::endl;
}
HumanB::~HumanB()
{
    std::cout << "HumanB is destroyed" << std::endl;
}
void HumanB::attack(void)
{
    if(!kill)
        return ;
    std::cout << this->name << " attacks with their " << this->kill->getType() <<std::endl;
}
void HumanB::setWeapon(Weapon &kill)
{
    this->kill = &kill;
}