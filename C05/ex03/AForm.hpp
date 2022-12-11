/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 10:45:36 by oufisaou          #+#    #+#             */
/*   Updated: 2022/11/22 10:45:39 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_HPP
#define AForm_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm{

    private:
        const std::string name;
        bool sign;
        const size_t gradeExec;
        const size_t gradeSign;

    public:
        AForm();
        virtual ~AForm();
        AForm(std::string name,size_t gradeExec, size_t gradeSign);
        AForm(AForm const &obj);
        AForm& operator=(const AForm &obj);
        virtual void execute(Bureaucrat const & executor) const = 0;

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

        class NotSignedException: public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
        
        void beSigned(const Bureaucrat &obj);

};

std::ostream& operator<<(std::ostream &output, AForm const &obj);
#endif