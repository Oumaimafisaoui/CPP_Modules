#include <iostream>
#include <stack>
#include <deque>
#include "MutantStack.hpp"


int main()
{
    MutantStack<int> a;

    a.push(1);
    a.push(1);
    a.push(1);
    a.push(20);

    MutantStack<int>::iterator i;

    for(i = a.begin(); i != a.end(); i++)
    {
        std::cout << *i << std::endl;
    }

}