/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:17:09 by oufisaou          #+#    #+#             */
/*   Updated: 2022/11/13 15:03:36 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>


class ClapTrap{
    protected:
        std::string name;
        size_t HitPoint;
        size_t EnergyPoints;
        size_t Attack;

    public: 
        ClapTrap(); 
        ClapTrap(std::string name);
        ~ClapTrap();
        ClapTrap(const ClapTrap& obj);
        ClapTrap& operator=(const ClapTrap& obj);

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        
        std::string getName(void) const;
        size_t getHit(void) const;
        size_t getAttack(void) const;
        size_t getEnergy(void) const;

        void setName(std::string name);
        void setHit(size_t hit);
        void setEnergy(size_t energy);
        void setdamage(size_t damage);
};

#endif