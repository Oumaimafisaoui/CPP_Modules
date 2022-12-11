/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 21:43:04 by oufisaou          #+#    #+#             */
/*   Updated: 2022/11/13 23:01:27 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal{
    public:
        Cat();
        ~Cat();
        Cat(const Cat& obj);
        Cat& operator=(const Cat& obj);
        void makeSound(void) const;
        std::string getType(void) const;
};





#endif