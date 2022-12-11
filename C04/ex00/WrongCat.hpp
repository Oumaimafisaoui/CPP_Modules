/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 23:09:50 by oufisaou          #+#    #+#             */
/*   Updated: 2022/11/15 09:50:45 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"


class WrongCat : public WrongAnimal
{
    public:
        void makeSound(void) const;
        WrongCat();
        ~WrongCat();
        WrongCat(std::string type);
        WrongCat(WrongCat const &obj);
        WrongCat &operator=(WrongCat const &obj);
};



#endif