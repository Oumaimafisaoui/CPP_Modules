/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 10:40:57 by oufisaou          #+#    #+#             */
/*   Updated: 2022/11/13 14:38:54 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
        public:
                FragTrap();
                FragTrap(std::string name);
                FragTrap(const FragTrap& obj);
                FragTrap& operator=(const FragTrap& obj);
                void highFivesGuys(void);
                void attack(const std::string& target);
                ~FragTrap();
};
#endif