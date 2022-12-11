/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 17:56:07 by oufisaou          #+#    #+#             */
/*   Updated: 2022/11/06 17:56:08 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


void Weapon::setType(std::string type)
{
    this->type = type;
}
std::string Weapon::getType(void) const
{
    return (this->type);
}
Weapon::Weapon(std::string type)
{
    this->type = type;
    std::cout << "Weapon created with type" << std::endl;
}
Weapon::~Weapon()
{
    std::cout << "Weapon destroyed" << std::endl;
}
Weapon::Weapon()
{
    std::cout << "Weapon created without type" << std::endl;
}