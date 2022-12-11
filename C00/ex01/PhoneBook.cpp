/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 09:55:16 by oufisaou          #+#    #+#             */
/*   Updated: 2022/11/03 10:24:06 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <string>

PhoneBook::PhoneBook()
{
    std::cout << "constructor for phonebook is called" << "\n";
    counter = 0;
    pos = 0;
}
PhoneBook::~PhoneBook()
{
    std::cout << "deconstructor for phonebook is called" << "\n";
}

void  PhoneBook::takeValue(void)
{
    std::string first;
    std::string last;
    std::string nick;
    std::string phone;
    std::string secret;

    while(1337)
    {
        std::cout << "Please enter the first name please:" << "\n";
        std::getline(std::cin, first);
        if (!std::cin)
            exit (0);
        std::cout << "Please enter the last name please:" << "\n";
        std::getline(std::cin, last);
        if (!std::cin)
            exit (0);
        std::cout << "Please enter the nick name please: " << "\n";
        std::getline(std::cin, nick);
        if (!std::cin)
            exit (0);
        std::cout << ">> Please enter a phone number" << "\n";
        std::getline(std::cin, phone);
        if (!std::cin)
            exit (0);
        std::cout << ">> Please enter a dark secret" << "\n";
        std::getline(std::cin, secret);
        if (!std::cin)
            exit (0);
        
        if(first.empty() || last.empty() || nick.empty() || phone.empty() || secret.empty())
        {
            std::cout << "ERROR : ONE OF THE VALUES IS EMPTY , TRY AGAIN!" << "\n";
            break;
        }
        else
        {
            this->decideAdd(first, last, nick, phone, secret);
            break;
        }
        
    }
}

void    PhoneBook::decideAdd(std::string str, std::string str1, std::string str2, std::string str3, std::string str4)
{
    if(pos == 8)
        pos = 0;
    this->user[pos].setFirst(str);
    this->user[pos].setLast(str1);
    this->user[pos].setNick(str2);
    this->user[pos].setPhone(str3);
    this->user[pos].setSecret(str4);

    pos++;
    if(counter < 8)
        counter++;
    else
        counter = 8;

    std::cout << std::setw(99) << "Your contact had been added successfully!" << "\n";
}

void    PhoneBook::printbanner(void)
{
    std::cout << "|----------+----------+----------+----------|" << "\n";
    std::cout << "|  Index   | firstname| lastname | nickname |" << "\n";
    std::cout << "+----------+----------+----------+----------+" << "\n";
}

std::string   PhoneBook::tensize(std::string str)
{
    std::string tmp;
    tmp = str;
    if(str.length() >= 11)
    {
         tmp.resize(9);
         tmp[8] = '.';
         return (tmp);
    }
    else
    {
        return (str);
    }
}


void    PhoneBook::search(void)
{
    size_t index = 0;
    int j = 0;
    int count;

    count = counter;

    if(count == 0)
    {
        std::cout << "Empty PhoneBook !" << "\n";
        return ;
    }
    printbanner();
    while(j < count)
    {
        std::cout 
        <<  "|" << std::setw(10) << j << "|" << std::setw(10)
        << tensize(this->user[j].getFirst()) << "|"
        << std::setw(10) << tensize(this->user[j].getLast()) << "|"  << std::setw(10)
        << std::setw(10) << tensize(this->user[j].getNick()) << "|" << "\n";
        std::cout << "+----------+----------+----------+----------+" << "\n";
        j++;  
    }
    std::cout << "\n";
    std::cout << " Enter index:";
    std::cin >> index;

    if(std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore();
        std::cout << "Invalid index, TRY AGAIN !" << "\n";
    }
    else if(index < counter)
    {
        std::cout << "---------------------------------------------------" << "\n";
        std::cout << "FirstName:      " << this->user[index].getFirst() <<"\n";
        std::cout << "LastName        " << this->user[index].getLast() <<"\n";
        std::cout << "NickName:       " << this->user[index].getNick()<<"\n";
        std::cout << "PhoneNumber:    " << this->user[index].getSecret() <<"\n";
        std::cout << "Secret          " << this->user[index].getPhone() <<"\n";
        std::cout << "---------------------------------------------------" << "\n";
    }
    else
    {
        std::cout << "Invalid index, try again!" << "\n";
    }
    std::cin.ignore();
    return ;
}