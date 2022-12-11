/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:17:16 by oufisaou          #+#    #+#             */
/*   Updated: 2022/11/13 15:06:44 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"

int main()
{
    FragTrap k("oumaima");
    std::cout << k.getAttack() << " is the starting attack dammage " << std::endl;
    std::cout << k.getHit() << " is the starting  hitpoints " << std::endl;
    std::cout << k.getEnergy() << " is The starting energy" << std::endl;
    k.attack("basma");
    k.takeDamage(10);
    k.highFivesGuys();
}