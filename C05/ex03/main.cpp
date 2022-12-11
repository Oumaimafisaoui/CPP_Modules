/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 11:26:34 by oufisaou          #+#    #+#             */
/*   Updated: 2022/11/23 09:20:21 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	try
	{
		Bureaucrat	one = Bureaucrat("one", 5);
		Intern m;
		AForm* form = m.makeForm("shrubbeery creation", "oumaima");
		form->beSigned(one);
		form->execute(one);
		delete form;
	}
	catch(std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}
	
}
