/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 16:08:50 by oufisaou          #+#    #+#             */
/*   Updated: 2022/11/08 09:31:44 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int N =  10;
    
    Zombie* hord = zombieHorde(N, "oumaima");

    for(int i = 0; i < N; i++)
    {
        hord[i].announce();
    }
    delete[] hord;
}