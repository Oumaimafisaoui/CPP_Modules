/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 10:43:34 by oufisaou          #+#    #+#             */
/*   Updated: 2022/11/22 21:19:08 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("Default roro",72, 45), target("Default")
{
    std::cout << "Constructor for RobotomyRequestForm is caled" << std::endl;
}
RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Distructor for RobotomyRequestForm is called" << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("roro form",72, 45), target(target)
{
    std::cout << "Parametrized constructor for RobotomyRequestForm is called" << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &obj) : AForm(obj.getName(),72, 45)
{
    std::cout << "Copy constructor for RobotomyRequestForm is called" << std::endl;
     *this = obj;
}
RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const &obj)
{
    std::cout << "Operator for RobotomyRequestForm is called" << std::endl;
    this->target = obj.target;
    return *this;
}

std::string RobotomyRequestForm::getTarget(void) const
{
    return (this->target);
}
void RobotomyRequestForm::execute(Bureaucrat const & executor) const
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
        std::cout << ">>>>>>>> DRILLING NOISES <<<<<<<<<" << std::endl;
        static int flag = 0; //make the current tiem as a reference
        if(flag % 2 == 0)
        {
            std::cout << "the robotomy failed." << std::endl;
        }
        else
        {
            std::cout << this->getTarget() << " has been robotomized successfully. " << std::endl;
        }
        flag++;
    }
}