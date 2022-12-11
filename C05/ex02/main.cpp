/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 11:26:34 by oufisaou          #+#    #+#             */
/*   Updated: 2022/11/23 09:18:10 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try
	{
		Bureaucrat	one = Bureaucrat("one", 2);
		std::cout << one << std::endl;
		one.increase();
		AForm *three = new PresidentialPardonForm("hello");
		// one.signForm(*three);
		three->execute(one);


		// AForm *three = new RobotomyRequestForm("hello");
		// one.signForm(*three);
		// three->execute(one);
		// three->execute(one);
		// three->execute(one);



		// AForm *three = new PresidentialPardonForm("hello");
		// one.signForm(*three);
		// three->execute(one);
		delete three;
		
	}
	catch(std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}
	
}
