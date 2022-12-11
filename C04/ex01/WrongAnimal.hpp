/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 23:08:07 by oufisaou          #+#    #+#             */
/*   Updated: 2022/11/14 19:03:56 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal{
    protected:
        std::string type;
    public:
        WrongAnimal(); //default constructor
        ~WrongAnimal(); //Distructor
        WrongAnimal(std::string type); //overloading constratctor
        WrongAnimal &operator=(WrongAnimal const &obj); //operator overloader
        WrongAnimal(WrongAnimal const &obj);
        //METHODS
        std::string getType(void) const;
        void    makeSound(void) const;
};
#endif
