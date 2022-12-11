/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 10:45:30 by oufisaou          #+#    #+#             */
/*   Updated: 2022/11/22 20:50:54 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

/* >>>>>>>>>>>>>>>>> Orthodoxal chanonical form <<<<<<<<<<<<<<<<<<<<<<<*/

AForm::AForm()
: name("Default"), sign(false),  gradeExec(2), gradeSign(6) 
{
    std::cout << "Constructor is called for AForm!" << std::endl;
}

AForm::AForm(std::string name,size_t gradeExec, size_t gradeSign)
: name(name), sign(false),  gradeExec(gradeExec), gradeSign(gradeSign) //add grade function
{
    std::cout << "Constructor is called for AForm!" << std::endl;
    if(gradeExec < 1 || gradeSign < 1)
    {
        throw AForm::GradeTooHighException();
    }
    else if(gradeExec > 150 || gradeSign > 150)
    {
        throw AForm::GradeTooLowException();
    }
}

AForm::~AForm()
{
    std::cout << "Distructor for Aform is called" << std::endl;
}

AForm::AForm(AForm const &obj)
: name(obj.getName()), sign(obj.getSign()),  gradeExec(obj.getGradeExec()), gradeSign(obj.getGradeSign()) //add grade function
{
    std::cout << "AForm copy constructor is called" << std::endl;
    *this = obj;
}

AForm& AForm::operator=(const AForm &obj)
{
    std::cout << "Operator is called" << std::endl;
    this->sign = obj.getSign();
    return (*this);
}


/* >>>>>>>>>>>>>>>>> Getter <<<<<<<<<<<<<<<<<<<<<<<*/

std::string AForm::getName(void) const
{
    return (this->name);
}
bool AForm::getSign(void) const
{
    return (this->sign);
}
size_t AForm::getGradeSign(void) const
{
    return (this->gradeSign);
}

size_t AForm::getGradeExec(void) const
{
    return (this->gradeExec);
}

/* >>>>>>>>>>>>>>>>> Overloader <<<<<<<<<<<<<<<<<<<<<<<*/

std::ostream& operator<<(std::ostream &output, AForm const &obj)
{
   output << "AForm         : " << obj.getName() << std::endl
	  << "Signed           : " << obj.getSign() << std::endl
	  << "the grade to sign is  : " << obj.getGradeSign() << std::endl
	  << "the grade to execute is : " << obj.getGradeExec() << std::endl;
   return output;
}

/* >>>>>>>>>>>>>>>>> Exception <<<<<<<<<<<<<<<<<<<<<<<*/

const char	*AForm::GradeTooHighException::what() const throw()
{
    return ("Grade Too High");
}

const char	*AForm::GradeTooLowException::what() const throw()
{
    return ("Grade Too Low");
}

const char	*AForm::NotSignedException::what() const throw()
{
    return ("The form is not signed!");
}



/* >>>>>>>>>>>>>>>>> Be signed <<<<<<<<<<<<<<<<<<<<<<<*/

void AForm::beSigned(const Bureaucrat &obj)
{
    if(obj.getGrade() >= this->getGradeSign())
    {
        std::cout << obj.getName() << " couldn't sign " << this->getName() << " because grade is low" << std::endl;
        throw AForm::GradeTooLowException();
    }
    else
    {
        std::cout << obj.getName() << " signed " << this->getName() << std::endl;
        this->sign  = true;
    }
}
