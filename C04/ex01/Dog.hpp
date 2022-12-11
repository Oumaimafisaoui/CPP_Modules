/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 21:44:03 by oufisaou          #+#    #+#             */
/*   Updated: 2022/11/14 20:19:39 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
class Dog : public Animal{
        public:
            Dog();
            ~Dog();
            Dog(const Dog& obj);
            Dog &operator=(const Dog& obj);
            void makeSound(void) const;
            std::string getType(void) const;
        private:
            Brain *brain;
            
};

#endif