/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 09:54:51 by oufisaou          #+#    #+#             */
/*   Updated: 2022/11/03 10:15:09 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>

class Contact{
    private:
        std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string phoneNumber;
        std::string darkest;
 
    public:
        Contact();
        ~Contact();
        void setFirst(std::string FirstName);
        void setLast(std::string lastName);
        void setNick(std::string nickName);
        void setPhone(std::string phoneNumber);
        void setSecret(std::string darkSecret);

        std::string getFirst(void);
        std::string getLast(void);
        std::string getNick(void);
        std::string getPhone(void);
        std::string getSecret(void);
};

#endif
