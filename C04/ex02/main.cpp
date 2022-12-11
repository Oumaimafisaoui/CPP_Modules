/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 22:06:59 by oufisaou          #+#    #+#             */
/*   Updated: 2022/11/15 11:01:51 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
    Animal* animal[6];

    for(int i = 0; i < 6; i++)
    {
        if(i % 2 == 0)
        { 
            animal[i] = new Cat();
        }
        else
        {
            animal[i] = new Dog();
        }
    }

    for(int i = 0; i < 6; i++)
    {
       animal[i]->makeSound();
    }

    for(int i = 0; i < 6; i++)
    {
       delete animal[i];
    }

}