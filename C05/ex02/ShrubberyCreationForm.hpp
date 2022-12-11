/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 10:42:51 by oufisaou          #+#    #+#             */
/*   Updated: 2022/11/22 16:58:14 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include "AForm.hpp"
# include "Bureaucrat.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
    std::string target;

    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(ShrubberyCreationForm const &obj);
        virtual ~ShrubberyCreationForm();

        ShrubberyCreationForm	&operator=(ShrubberyCreationForm const &obj);

        std::string getTarget(void) const;
        virtual void execute(Bureaucrat const & executor) const;
};

#endif