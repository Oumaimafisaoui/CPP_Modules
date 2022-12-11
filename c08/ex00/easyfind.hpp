#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <exception>
#include <iostream>
#include <algorithm>

class NotFoundValue : public std::exception
{
    public:
        virtual const char *what() const throw()
        {
            return "Element not found";
        }
};

template <typename T>
void easyfind(T container, int content)
{
    typename T::iterator res;
    res = std::find(container.begin(), container.end(), content);
    if (res == container.end())
        throw NotFoundValue();
    else
        std::cout << "The value is " << *res << " it is found at " << &*res << std::endl;
}

#endif