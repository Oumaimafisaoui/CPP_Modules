/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 09:25:45 by oufisaou          #+#    #+#             */
/*   Updated: 2022/11/03 09:47:50 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char **argv)
{
    int i = 1;
    size_t j;
    std::string line;

    if(argc >= 2)
    {
        while(i <= argc - 1)
        {
            j = 0;
            line = argv[i];
            while(j < line.length())
            {
                line[j] = toupper(line[j]);
                j++;
            }
            std::cout << line;
            i++;
        }
        std::cout << "\n";
    }
    else
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << "\n";
    }
}