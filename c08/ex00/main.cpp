#include "easyfind.hpp"
#include <vector>
#include <list>
#include <array>
#include <deque>

int main()
{
    std::cout << "Start tests" << std::endl;
    std::vector <int> v;
    std::list <int> l;
    std::array <int, 5> a = {1, 2, 3, 4, 5};
    std::deque <int> q;
    for (int i = 0; i < 5; i++)
    {
        v.push_back(i);
    }
    for (int i = 0; i < 5; i++)
    {
        l.push_back(i);
    }
    for (int i = 0; i < 5; i++)
    {
        q.push_back(i);
    }
    try
    {
        easyfind(v, 12);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        easyfind(l, 1);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        easyfind(a, 3);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        easyfind(q, 3);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}
