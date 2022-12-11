/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 11:26:29 by oufisaou          #+#    #+#             */
/*   Updated: 2022/11/23 09:23:26 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


/* >>>>>>>>>>>>>>>>> Orthodoxal chanonical form <<<<<<<<<<<<<<<<<<<<<<<*/
Bureaucrat::Bureaucrat(): name("Default")
{
    std::cout << "Constructor called" << std::endl;
}
Bureaucrat::~Bureaucrat()
{
    std::cout << "Distructor called" << std::endl;
}
Bureaucrat::Bureaucrat(const Bureaucrat &obj) : name("Copy")
{
    std::cout << "Copy Constructor called" << std::endl;
    *this = obj;

}
Bureaucrat &Bureaucrat::operator=(const Bureaucrat& obj)
{
    std::cout << "Operator called" << std::endl;
    this->grade = obj.getGrade();
    return (*this);
}
Bureaucrat::Bureaucrat(std::string name, size_t grade) : name(name)
{
    std::cout << "Parametrized constructor is called" << std::endl;
    if(grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if(grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->grade = grade;
    
}


/* >>>>>>>>>>>>>>>>> Getters <<<<<<<<<<<<<<<<<<<<<<<*/

std::string Bureaucrat::getName() const
{
    return (this->name);
}
size_t Bureaucrat::getGrade() const
{
    return this->grade;
}


/* >>>>>>>>>>>>>>>>> Increase decrease <<<<<<<<<<<<<<<<<<<<<<<*/

void Bureaucrat::increase(void)
{
     std::cout << "Try increase grade" << std::endl;
     if(this->getGrade() == 1)
     {
        throw Bureaucrat::GradeTooHighException();
     }
     else
     {
        this->grade -= 1;
     }
}
void Bureaucrat::decrease(void)
{
    std::cout << "Try decrease grade" << std::endl;
    if(this->getGrade() == 150)
    {
        throw Bureaucrat::GradeTooLowException();
    }
    else
        this->grade += 1;
}


/* >>>>>>>>>>>>>>>>> Operators overload <<<<<<<<<<<<<<<<<<<<<<<*/

std::ostream& operator<<(std::ostream &output, Bureaucrat const &obj)
{
   output << obj.getName() <<  " , bureaucrat grade " << obj.getGrade() << ".";
   return output;
}


/* >>>>>>>>>>>>>>>>> Customs exceptions <<<<<<<<<<<<<<<<<<<<<<<*/

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("GradeTooHigh");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("GradeToolow");
}