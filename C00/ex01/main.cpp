/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 09:34:10 by oufisaou          #+#    #+#             */
/*   Updated: 2022/11/03 10:14:42 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"


int main(int argc, char **argv)
{   
    PhoneBook book;
    std::string line;

    (void)argc;
    (void)argv; 
    
    while(1337)
    {
        std::cout << "Please insert a value: ADD / SEARCH / EXIT" << "\n";
        std::cout << ">> ";
        std::getline(std::cin, line);
        if(!std::cin)
            exit(EXIT_FAILURE);
        if(line == "ADD")
        {
            book.takeValue();
        }
        else if(line == "SEARCH")
        {
            book.search();
        }
        else if (line == "EXIT")
            break ;
    }
    return (0);
}