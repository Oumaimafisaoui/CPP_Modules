/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 17:56:23 by oufisaou          #+#    #+#             */
/*   Updated: 2022/11/06 17:57:04 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl one = Harl();

    one.complain("DEBUG");
    one.complain("INFO");
    one.complain("ERROR");
    one.complain("WARNING");
    one.complain("WFWFWEF");
}