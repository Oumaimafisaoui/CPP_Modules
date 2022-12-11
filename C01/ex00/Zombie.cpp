/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 16:05:03 by oufisaou          #+#    #+#             */
/*   Updated: 2022/11/07 09:02:16 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"


void Zombie::setZombie(std::string name)
{
    this->name = name;
}
std::string Zombie::getZombie(void) const
{
    return (this->name);
}
void Zombie::announce(void)
{
    std::cout << this->name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}
Zombie::Zombie(std::string name)
{
    this->name = name;
    std::cout << "Zombie is created with overload" << std::endl;
}
Zombie::Zombie()
{
    this->name = "default";
    std::cout << "Zombie is created" << std::endl;
}
Zombie::~Zombie()
{
    std::cout << "Zombie is destroyed" << std::endl;

}