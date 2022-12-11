/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 11:58:56 by oufisaou          #+#    #+#             */
/*   Updated: 2022/11/22 21:41:33 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Intern constructor is called" << std::endl;
    this->forms[0] = "shrubbeery creation";
    this->forms[1] = "robotomy request";
    this->forms[2] = "presidential pardon";

    this->decide[0] = &Intern::ShrubberyForm;
    this->decide[1] = &Intern::RobotForm;
    this->decide[2] = &Intern::PresidentForm;
}
Intern::~Intern()
{
    std::cout << "Intern Distructor is called" << std::endl;
}
Intern&Intern::operator=(Intern const &obj)
{
    std::cout << "Intern Operator is called" << std::endl;
    (void)obj;
    return (*this);
}
Intern::Intern(Intern const &obj)
{
    std::cout << "Intern Operator is called" << std::endl;
    *this = obj;
}

 AForm* Intern::makeForm(std::string form, std::string target) const 
 {

    if(target.empty())
    {
        throw Intern::EmptyTargetException();
    }
    else
    {
        for(int i = 0; i < 3; i++)
        {
            if(!form.compare(this->forms[i]))
            {
                std::cout << "Intern creates " << form << std::endl;
                return (this->*(decide[i]))(target);
            }
        }
    }
    throw Intern::NoFormException();
 }

AForm *Intern::ShrubberyForm(std::string target) const 
{
    return (new ShrubberyCreationForm(target));
}
AForm *Intern::RobotForm(std::string target) const
{
    return (new RobotomyRequestForm(target));
}
AForm *Intern::PresidentForm(std::string target) const
{
    return (new PresidentialPardonForm(target));
}

const char *Intern::EmptyTargetException::what() const throw()
{
    return ("Target is empty!");
}

const char *Intern::NoFormException::what() const throw()
{
    return ("No form named that !");
}