/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 15:41:27 by oufisaou          #+#    #+#             */
/*   Updated: 2022/11/30 10:26:55 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

void ConvertChar(std::string input, int flag)
{
    int c = 0;
    const char *i = input.c_str();
    if(isalpha(i[0]) && i[0] != '-' && i[0] != '+')
        c = i[0];
    else
        c = atoi(i);
    if(flag == 1 || c > 127 || c < 0)
        std::cout << "char: impossible" << std::endl;
    else if(std::isprint(c) == true)
    {
        std::cout << "char: " << "\'" << static_cast<char>(c) << "\'" << std::endl;
    }
    else
        std::cout << "char: Non displayable" << std::endl;
}


void ConvertInt(std::string input, int flag, int floaty)
{
        const char *i = input.c_str();

        if(floaty == 0)
        {
             int numbery;
             if(isalpha(i[0]) && i[0] != '-' && i[0] != '+')
                numbery = static_cast<int>(i[0]);
             else
               numbery = atoi(i);
            if(numbery > INT_MAX || numbery < INT_MIN || flag == 1)
                std::cout << "int: impossible" << std::endl;
            else
                std::cout << "int: " << numbery << std::endl;
        }
        else
        {
             double doubly = std::strtod(i, NULL);
             int numbery = static_cast<int>(doubly);
             if(numbery >= INT_MAX || numbery <= INT_MIN || flag == 1)
                std::cout << "int: impossible" << std::endl;
             else
                std::cout << "int: " << numbery << std::endl;
        }
}

void ConvertFloat(std::string input, int flag, int floaty)
{
    const char *i = input.c_str();
    if(floaty == 1)
    {
        std::cout << std::fixed << std::setprecision(1);
        float numbery = std::strtof(i, NULL);

        
        if(flag == 1)
            std::cout << "float: " << input  << "f" << std::endl;
        else
            std::cout << "float: " << numbery << "f" << std::endl;
    }
    else
    {
        int number;
        std::cout << std::fixed << std::setprecision(1);
        if(isalpha(i[0]) && i[0] != '-' && i[0] != '+')
            number = static_cast<int>(i[0]);
        else
            number = atoi(i);
        float numbery1 = static_cast<float>(number);
        if(flag == 1)
            std::cout << "float: " << input  << "f" << std::endl;
        else
            std::cout << "float: " << numbery1 << "f" << std::endl;
    }
    
}

void ConvertDouble(std::string input, int flag, int floaty)
{
    const char *i = input.c_str();
    if(floaty == 1)
    {
        std::cout << std::fixed << std::setprecision(1);
        double numbery = std::strtod(i, NULL);
        if(flag == 1)
            std::cout << "double: " << input <<std::endl;
        else
            std::cout << "double: " << numbery << std::endl;
    }
    else
    {
        int number ;
        std::cout << std::fixed << std::setprecision(1);
        if(isalpha(i[0]) && i[0] != '-' && i[0] != '+')
            number = static_cast<int>(i[0]);
        else
             number = atoi(i);
        double numbery1 = static_cast<double>(number);
        if(flag == 1)
            std::cout << "double: " << input << std::endl;
     
        else
            std::cout << "double: " << numbery1 << std::endl;
    }
    
}
