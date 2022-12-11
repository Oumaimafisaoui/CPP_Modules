/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 23:18:19 by oufisaou          #+#    #+#             */
/*   Updated: 2022/11/14 14:51:42 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain{
    private:
        std::string ideas[100];
    public:
        Brain();
        ~Brain();
        Brain& operator=(const Brain& obj);
        Brain(const Brain& obj);
      
};





#endif