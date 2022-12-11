/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 17:55:45 by oufisaou          #+#    #+#             */
/*   Updated: 2022/11/08 09:35:21 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


HumanA::HumanA(std::string name, Weapon &kill): name(name), kill(kill)
{
     std::cout << "HumanA is created" << std::endl;
}
HumanA::~HumanA()
{
    std::cout << "HumanA is destroyed" << std::endl;
}
void HumanA::attack(void)
{
     std::cout << this->name << " attacks with their " << this->kill.getType() <<std::endl;
}