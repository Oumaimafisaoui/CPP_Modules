/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 22:28:53 by oufisaou          #+#    #+#             */
/*   Updated: 2022/11/30 10:35:31 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int main(int argc, char **argv)
{
    bool dot = false;
    bool f = false;
    bool valid = true;
    int floaty = 0;
    int flag = 0;
    int i = 0;
    
    if(argc != 2)
    {
        std::cout << "Please insert two arguments!" << std::endl;
        return (1);
    }
    std::string input = argv[1];
    double doubly = std::strtod(argv[1], NULL);
    if(std::isnan(doubly) == true || !input.compare("inf")|| !input.compare("+inf") || !input.compare("-inf"))
     {
            flag = 1;
            ConvertChar(input, flag);
            ConvertInt(input, flag, floaty);
            ConvertFloat(input, flag, floaty);
            ConvertDouble(input, flag, floaty);
            return 1;
    }
    int len = input.length();
    if(len > 1)
    {
        while(input[i])
        {
            if((input[i] == '-' || input[i] == '+') && ((input[i + 1] > 58 || input[i + 1] < 48) || i != 0))
                valid = false;
            else if(input[i] == '.' && dot == false)
                dot = true;
            else if(input[i] == '.' && dot == true)
                valid = false;
            else if((input[i] == 'f') && (f == false) && (dot == true) && (i = len - 1))
                f = true;
            else if((input[i] == 'f') && ((i != len - 1) || (dot == false)))
                valid = false;
            else if((isalpha(input[i]) && (f = true)))
                valid = false;
            else if(isalpha(input[i] && (f == false) && input[i] != 'f'))
                valid = false;
            else
                i++;
            i++;
        }

    }
    if(valid == true)
    {
        double l = std::strtod(input.c_str(), NULL);
        if(f == true || dot == true || (l > INT_MAX || l < INT_MIN))
            floaty = 1;
        ConvertChar(input, flag);
        ConvertInt(input, flag, floaty);
        ConvertFloat(input, flag, floaty);
        ConvertDouble(input, flag, floaty);
    }
    else
    {   std::cout << "Invalid input!" << std::endl;
        return 1;
    }
}