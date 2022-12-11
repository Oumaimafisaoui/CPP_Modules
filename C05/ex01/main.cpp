/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 11:26:34 by oufisaou          #+#    #+#             */
/*   Updated: 2022/11/22 20:48:05 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
int main()
{
   try
	{
		Bureaucrat	one = Bureaucrat("one", 90);
		// std::cout << one << std::endl;
		
		Form two = Form("three", 4, 3);
		// std::cout << two << std::endl;
		// one.signForm(two);
		two.beSigned(one);
		one.signForm(two);
	}
	catch(std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}
}
