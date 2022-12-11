/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 16:42:31 by oufisaou          #+#    #+#             */
/*   Updated: 2022/11/22 17:29:39 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{

    private:
        const std::string name;
        bool sign;
        const size_t gradeExec;
        const size_t gradeSign;

    public:
        Form();
        ~Form();
        Form(std::string name,size_t gradeExec, size_t gradeSign);
        Form(Form const &obj);
        Form& operator=(const Form &obj);

        std::string getName(void) const;
        bool getSign(void) const;
        size_t getGradeSign(void) const;
        size_t getGradeExec(void) const;

        class GradeTooHighException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
        void beSigned(const Bureaucrat &obj);

};

std::ostream& operator<<(std::ostream &output, Form const &obj);
#endif