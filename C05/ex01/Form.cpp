/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 16:47:29 by oufisaou          #+#    #+#             */
/*   Updated: 2022/11/22 20:46:58 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


/* >>>>>>>>>>>>>>>>> Orthodoxal chanonical form <<<<<<<<<<<<<<<<<<<<<<<*/

Form::Form()
: name("Default"), sign(false),  gradeExec(2), gradeSign(6) 
{
    std::cout << "Constructor is called for Form!" << std::endl;
}

Form::Form(std::string name,size_t gradeExec, size_t gradeSign)
: name(name), sign(false),  gradeExec(gradeExec), gradeSign(gradeSign) 
{
    std::cout << "Constructor is called for Form!" << std::endl;
    if(gradeExec < 1 || gradeSign < 1)
    {
        throw Form::GradeTooHighException();
    }
    else if(gradeExec > 150 || gradeSign > 150)
    {
        throw Form::GradeTooLowException();
    }
}

Form::~Form()
{
    std::cout << "Distructor is called for Form" << std::endl;
}

Form::Form(Form const &obj) 
: name(obj.getName()), sign(obj.getSign()),  gradeExec(obj.getGradeExec()), gradeSign(obj.getGradeSign()) //add grade function
{
    std::cout << "Form copy constructor is called" << std::endl;
    *this = obj;
}

Form& Form::operator=(const Form &obj)
{
    std::cout << "Operator is called" << std::endl;
    this->sign = obj.getSign();
    return (*this);
}



/* >>>>>>>>>>>>>>>>> Getters <<<<<<<<<<<<<<<<<<<<<<<*/

std::string Form::getName(void) const
{
    return (this->name);
}
bool Form::getSign(void) const
{
    return (this->sign);
}
size_t Form::getGradeSign(void) const
{
    return (this->gradeSign);
}

size_t Form::getGradeExec(void) const
{
    return (this->gradeExec);
}


/* >>>>>>>>>>>>>>>>> Overloader <<<<<<<<<<<<<<<<<<<<<<<*/

std::ostream& operator<<(std::ostream &output, Form const &obj)
{
   output << "Form         : " << obj.getName() << std::endl
	  << "Signed           : " << obj.getSign() << std::endl
	  << "the grade to sign is  : " << obj.getGradeSign() << std::endl
	  << "the grade to execute is : " << obj.getGradeExec() << std::endl;
   return output;
}


/* >>>>>>>>>>>>>>>>> Exceptions <<<<<<<<<<<<<<<<<<<<<<<*/

const char	*Form::GradeTooHighException::what() const throw()
{
    return ("Get out the the grade is too high!");
}

const char	*Form::GradeTooLowException::what() const throw()
{ 
    return ("Get out the the grade is too low!");
}




/* >>>>>>>>>>>>>>>>> Besigned <<<<<<<<<<<<<<<<<<<<<<<*/

void Form::beSigned(const Bureaucrat &obj)
{
    if(obj.getGrade() >= this->getGradeSign())
    {
        std::cout << obj.getName() << " couldn't sign " << this->getName() << " because grade is low" << std::endl;
        throw Form::GradeTooLowException();
    }
    else
    {
        std::cout << obj.getName() << " signed " << this->getName() << std::endl;
        this->sign  = true;
    }
}
