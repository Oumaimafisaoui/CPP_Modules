/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 09:54:44 by oufisaou          #+#    #+#             */
/*   Updated: 2022/10/30 10:52:39 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
    std::cout << "contact constructor is called" << "\n";
}

Contact::~Contact(void)
{
     std::cout << "contact destructor is called" << "\n";
}

void Contact::setFirst(std::string FirstName)
{
    this->firstName = FirstName;
}
void Contact::setLast(std::string lastName)
{
    this->lastName = lastName;
}
void Contact::setNick(std::string nickName)
{
    this->nickName = nickName;
}
void Contact::setPhone(std::string phoneNumber)
{
    this->phoneNumber = phoneNumber;
}
void Contact::setSecret(std::string darkest)
{
    this->darkest = darkest;
}


std::string Contact::getFirst(void)
{
    return (this->firstName);
}
std::string Contact::getLast(void)
{
    return (this->lastName);
}
std::string Contact::getNick(void)
{
    return (this->nickName);
}
std::string Contact::getPhone(void)
{
    return (this->phoneNumber);
}
std::string Contact::getSecret(void)
{
    return (this->darkest);
}