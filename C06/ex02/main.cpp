/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 11:09:28 by oufisaou          #+#    #+#             */
/*   Updated: 2022/11/30 11:22:17 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

// It randomly instanciates A, B or C and returns the instance as a Base pointer
Base * generate(void)
{
    srand(time(0));
    int round = (rand() % 3) + 1;

    if(round == 1)
    {
        std::cout << "Object of type A" << std::endl;
        return new A;

    }
    if(round == 2)
    {
        std::cout << "Object of type B" << std::endl;
        return new B;

    }
    if(round == 3)
    {
        std::cout << "Object of type C" << std::endl;
        return new C;
    }
    else    
        return NULL;

}
// It prints the actual type of the object pointed to by p: "A", "B" or "C".
void identify(Base* p)
{
    if(dynamic_cast<A*>(p))
        std::cout << "It is a class A type" << std::endl;
    else if(dynamic_cast<B*>(p))
        std::cout << "It is a class B type" << std::endl;
    else if(dynamic_cast<C*>(p))
        std::cout << "It is a class C  type" << std::endl;
    else
        std::cout << "Invalid!" << std::endl;
}

// It prints the actual type of the object pointed to by p: "A", "B" or "C"
void identify(Base& p)
{
    try
    {
        std::cout << "Try casting A" << std::endl;
        (void)dynamic_cast<A&>(p);
        std::cout << "Successful cast A" << std::endl;
        
    }
    catch(const std::exception& e)
    {
        try
        {
            std::cout << "Try casting B" << std::endl;
            (void)dynamic_cast<B&>(p);
             std::cout << "Successful cast B" << std::endl;
        }
        catch(const std::exception& e)
        {
            try
            {
                std::cout << "Try casting C" << std::endl;
                (void)dynamic_cast<C&>(p);
                 std::cout << "Successful cast C" << std::endl;
              
            }
            catch(const std::exception& e)
            {
                std::cout << "Casting invalid" << std::endl;
            }
        }
    }
}

int main(void)
{
    Base * a = generate();
    identify(a);

    Base &b = *a;
    identify(b);
}

