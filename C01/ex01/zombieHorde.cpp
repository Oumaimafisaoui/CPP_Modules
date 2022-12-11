/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 16:09:11 by oufisaou          #+#    #+#             */
/*   Updated: 2022/11/07 09:12:09 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name )
{
    Zombie *horde = new (std::nothrow) Zombie[N];

    if(horde == NULL)
    {
        std::cout << "Allocations returned nullpointer" << std::endl;
        return (NULL);
    }
    for(int i = 0; i < N; i++)
    {
        horde[i].setZombie(name);
    }
    return &horde[0];
}