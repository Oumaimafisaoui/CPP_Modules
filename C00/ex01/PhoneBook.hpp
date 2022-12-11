/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 09:55:22 by oufisaou          #+#    #+#             */
/*   Updated: 2022/10/30 10:52:59 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "Contact.hpp"
#include <iomanip>

class PhoneBook{
    private:
        Contact user[8];
    public:
        size_t counter;
        size_t pos;
        PhoneBook();
        ~PhoneBook();
        void takeValue(void);
        void decideAdd(std::string first, std::string last, std::string nick, std::string phone, std::string secret);
        void search();
        void printbanner();
        std::string tensize(std::string str);

};
#endif