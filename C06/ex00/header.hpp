/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 15:41:32 by oufisaou          #+#    #+#             */
/*   Updated: 2022/11/30 11:18:16 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_HPP
#define HEADER_HPP

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <limits>

void ConvertChar(std::string input, int flag);
void ConvertInt(std::string input, int flag, int floaty);
void ConvertFloat(std::string input, int flag, int floaty);
void ConvertDouble(std::string input, int flag, int floaty);

#endif