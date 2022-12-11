/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 11:58:58 by oufisaou          #+#    #+#             */
/*   Updated: 2022/11/22 15:39:15 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <exception>

class AForm;

class Intern
{
    std::string forms[3];
    AForm* (Intern::*decide[3]) (std::string) const;
    
    AForm *ShrubberyForm(std::string target) const;
    AForm *RobotForm(std::string target) const;
    AForm *PresidentForm(std::string target) const;

    public:
        Intern();
        ~Intern();
        Intern& operator=(Intern const &obj);
        Intern(Intern const &obj);
        
        AForm* makeForm(std::string form, std::string target) const;
    

    class EmptyTargetException : public std::exception
    {
        public:
            virtual const char *what() const throw();
    };
    class NoFormException : public std::exception
    {
        public:
            virtual const char *what() const throw();
    };
};

#endif