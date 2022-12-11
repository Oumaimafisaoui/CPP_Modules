/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 15:41:44 by oufisaou          #+#    #+#             */
/*   Updated: 2022/12/03 16:16:24 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

//can not declare one template because of separate compilation 

template <typename T>

void swap(T& elem1, T& elem2)
{
    std::cout << "OUMAIMA" << std::endl;
    T tmp = elem1;
    elem1 = elem2;
    elem2 = tmp;
}

template <typename T>
T& min(T& elem1, T& elem2)
{
    return (elem2 > elem1 ? elem1 : elem2);
}

template<typename T>
T& max(T& elem1, T& elem2)
{
    return (elem1 > elem2 ? elem1 : elem2);
}

#endif