/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 10:42:46 by oufisaou          #+#    #+#             */
/*   Updated: 2022/11/22 19:25:47 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/* >>>>>>>>>>>>>>>>> Orthodoxal chanonical form <<<<<<<<<<<<<<<<<<<<<<<*/

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Default shushu", 145, 137), target("Default")
{
    std::cout << "Default constructor for ShrubberyCreationForm is called!" << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("shushu form", 145, 137), target(target)
{
    std::cout << "Parametrized Constructor for ShrubberyCreationForm is called!" << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &obj) : AForm(obj.getName(), 145, 137)
{
    std::cout << "Copy Constructor is called for ShrubberyCreationForm" << std::endl;
    *this = obj;
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm constructor is called!" << std::endl;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &obj)
{
    std::cout << "Operator is called for ShrubberyCreationForm" << std::endl;
    this->target = obj.target;
    return *this;
}
/* >>>>>>>>>>>>>>>>> Getter <<<<<<<<<<<<<<<<<<<<<<<*/

std::string ShrubberyCreationForm::getTarget(void) const
{
    return this->target;
}

/* >>>>>>>>>>>>>>>>> Execute <<<<<<<<<<<<<<<<<<<<<<<*/

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    std::string const TheName = target + "_shrubbery";
    std::ofstream output;
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
        try{
            output.open(TheName.c_str(), std::ios_base::out | std::ios_base::app);
        }
        catch(std::ostream::failure &e)
        {
            std::cout << "Could not open the file" << std::endl;
            return ;
        }
        for(int index = 0; index < 4; index++)
        {
            output  << "     $   $$   $     " << std::endl
                    << "  $  $$$$$$$$$$  $  " << std::endl
                    << "    $$$$$$$$$$$$   " << std::endl
                    << "$$$$$$$$$$$$$$$$$$$$" << std::endl
                    << "  $     $$$$    $   " << std::endl
                    << " $   $  $$$$  $  $ " << std::endl
                    << "      $ $$$$ $     " << std::endl
                    << "        $$$$       " << std::endl;

        }
        output << "        $$$$       " << std::endl
        << "        $$$$       " << std::endl
        << "        $$$$       " << std::endl;
    }
    output.close();
}