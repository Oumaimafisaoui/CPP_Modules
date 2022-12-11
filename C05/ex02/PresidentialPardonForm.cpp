/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 11:29:40 by oufisaou          #+#    #+#             */
/*   Updated: 2022/11/22 21:34:32 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/* >>>>>>>>>>>>>>>>> Orthodoxal chanonical form <<<<<<<<<<<<<<<<<<<<<<<*/

PresidentialPardonForm::PresidentialPardonForm() : AForm("Default shushu",25, 5), target("Default")
{
    std::cout << "Default constructor for PresidentialPardonForm is called!" << std::endl;
}
PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "Default Distructor for PresidentialPardonForm is called!" << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("pou pou",25, 5), target(target)
{
    std::cout << "Parametrized constructor for PresidentialPardonForm is called!" << std::endl;
}
PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const &obj)
{
    std::cout << "Parametrized constructor for PresidentialPardonForm is called!" << std::endl;
    this->target = obj.target;
    return *this;
}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &obj)
{
    std::cout << "Copy constructor for PresidentialPardonForm is called!" << std::endl;
    *this = obj;
}


/* >>>>>>>>>>>>>>>>> Getter <<<<<<<<<<<<<<<<<<<<<<<*/

std::string PresidentialPardonForm::getTarget(void) const
{
    return (this->target);
}


/* >>>>>>>>>>>>>>>>> Execute <<<<<<<<<<<<<<<<<<<<<<<*/

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if(this->getSign() == false)
    {
        throw AForm::NotSignedException();
    }
    else if(this->getGradeExec() < executor.getGrade())
    {
        throw AForm::GradeTooLowException();
    }
    else
    {
        std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
    }
    return ;
}