/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 16:09:04 by oufisaou          #+#    #+#             */
/*   Updated: 2022/11/06 16:09:05 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie{
    private:
        std::string name;
    public:
        void setZombie(std::string name);
        std::string getZombie(void) const;
        void announce(void);
        Zombie();
        Zombie(std::string name);
        ~Zombie();
};

Zombie* zombieHorde( int N, std::string name );

#endif