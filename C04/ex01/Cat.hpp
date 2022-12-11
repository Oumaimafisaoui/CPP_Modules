/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 21:43:04 by oufisaou          #+#    #+#             */
/*   Updated: 2022/11/14 19:01:03 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
class Cat : public Animal{
    private:
        Brain *brain;
    public:
        Cat();
        ~Cat();
        Cat(const Cat& obj);
        Cat& operator=(const Cat& obj);
        void makeSound(void) const;
        std::string getType(void) const;
};





#endif