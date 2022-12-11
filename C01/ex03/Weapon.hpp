/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 17:56:10 by oufisaou          #+#    #+#             */
/*   Updated: 2022/11/06 17:56:11 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon{
    private:
        std::string type;
    public:
        void setType(std::string type);
        std::string getType(void) const;
        Weapon(std::string type);
        ~Weapon();
        Weapon();
};


#endif