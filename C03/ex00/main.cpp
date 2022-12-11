/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:17:16 by oufisaou          #+#    #+#             */
/*   Updated: 2022/11/13 14:51:04 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap object("oumaima");
    object.attack("Raven");

    object.takeDamage(10);
    object.takeDamage(1);
    object.takeDamage(-1);
    object.beRepaired(-10);
}