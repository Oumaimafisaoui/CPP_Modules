/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 11:29:37 by oufisaou          #+#    #+#             */
/*   Updated: 2022/11/22 21:30:26 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public AForm
{  
    private:
        std::string target;
    public:
        PresidentialPardonForm();
        virtual ~PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm& operator=(PresidentialPardonForm const &obj);
        PresidentialPardonForm(PresidentialPardonForm const &obj);
        std::string getTarget(void) const;
        virtual void execute(Bureaucrat const & executor) const;

};

#endif