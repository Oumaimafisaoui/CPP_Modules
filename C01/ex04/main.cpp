/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 17:55:24 by oufisaou          #+#    #+#             */
/*   Updated: 2022/11/08 09:41:09 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>


int main(int argc, char **argv)
{
    if(argc == 4)
    {
        std::ifstream input;
        std::ofstream output;

        std::string line;
        std::string arg1;
        std::string arg2;
        std::string arg3;

        arg1 = argv[1];
        arg2 = argv[2];
        arg3 = argv[3];

        input.open(arg1, std::ios::in);

        if(!input.is_open())
        {
            std::cout << "The file does not exist , create it and try again!" << std::endl;
            return (1);
        }
      
        input.seekg(0, std::ios::end);

        if(input.tellg() == 0) 
        {
            std::cout << "The file is empty!" << std::endl;
            return (1);
        }
        input.seekg(0, std::ios::beg);

        output.open(arg1 + ".replace", std::ios::out | std::ios::trunc);

        if (arg2 == "" || arg3 == "")
            return (1);
        if(!output.is_open() || output.fail())
        {
            std::cout << "problem in output" << "\n";
        }
        else
        {
            while(std::getline(input, line))
            {
                size_t i = 0;
                while(i != std::string::npos)
                {
                    i = line.find(arg2);
                    if(i != std::string::npos)
                    {
                        line.erase(i, arg2.length());
                        line.insert(i, arg3);
                    }
                    if (arg2 == arg3)
                        break;
                }
                if(!input.eof())
                {
                    line.append("\n");
                }
            output << line;
            }
        }
        input.close();
        output.close();

    }
    else
    {
        std::cout << " Please insert 4 arguments" << std::endl;
        return (1);
    }
    return (0);
}