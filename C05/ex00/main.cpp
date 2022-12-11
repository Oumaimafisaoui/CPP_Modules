/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 11:26:34 by oufisaou          #+#    #+#             */
/*   Updated: 2022/11/23 09:14:05 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
   try
	{
		Bureaucrat	bob = Bureaucrat("Bob", 3);
		std::cout << bob << std::endl;
		Bureaucrat bob2 = bob;
		std::cout << bob2 << std::endl;
	}
	catch(std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}
}
