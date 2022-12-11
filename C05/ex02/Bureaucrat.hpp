/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 10:20:02 by oufisaou          #+#    #+#             */
/*   Updated: 2022/11/22 09:34:47 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREACRAT_HPP
#define BUREACRAT_HPP

#include <string>
#include <iostream>
#include "AForm.hpp"
#include <exception>

class AForm; //will be defined later

class Bureaucrat{
    private:
        const std::string name;
        size_t grade;
    public:
        Bureaucrat();
        ~Bureaucrat();
        Bureaucrat(std::string name, size_t grade);
        Bureaucrat(Bureaucrat const &obj);

        Bureaucrat& operator=(const Bureaucrat& obj);

        std::string getName(void) const;
        size_t getGrade(void) const;  

        void increase(void);
        void decrease(void);
        void signForm(AForm &theForm) const;
        void executeForm(AForm const &form) const;

        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
        
        
};

std::ostream& operator<<(std::ostream &output, Bureaucrat const &obj);

#endif