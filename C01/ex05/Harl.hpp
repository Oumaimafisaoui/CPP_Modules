/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 17:56:20 by oufisaou          #+#    #+#             */
/*   Updated: 2022/11/06 17:56:21 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <iostream>

class Harl{
    private:
        std::string level[4];
        void (Harl::*decideSay[4])(void);
        void debug( void );
        void info( void );
        void warning( void );
        void error( void ); 
    public:
        void complain(std::string level);
        Harl();
        ~Harl();      
};

#endif