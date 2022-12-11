/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 17:56:16 by oufisaou          #+#    #+#             */
/*   Updated: 2022/11/06 17:58:37 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn\'t put enough bacon in my burger! If you did, I wouldn\'t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I\'ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{  
    std::cout << "This is unacceptable! I want to speak to the manager now" << std::endl;
}

Harl::Harl()
{
    std::cout << "Harl created" << std::endl;
    this->level[0] = "DEBUG";
    this->level[1] = "INFO";
    this->level[2] = "WARNING";
    this->level[3] = "ERROR";

    this->decideSay[0] = &Harl::debug;
    this->decideSay[1] = &Harl::info;
    this->decideSay[2] = &Harl::warning;
    this->decideSay[3] = &Harl::error;
}

void Harl::complain(std::string level)
{
    for(int i = 0; i < 4; i++)
    {
        if(!level.compare(this->level[i]))
        {
            (this->*decideSay[i])();
            return ;
        }
    }
    std::cout << "Harl says nothing "<< std::endl;
    return ;
}
Harl::~Harl()
{
    std::cout << "Harl destroyed" << std::endl;
}