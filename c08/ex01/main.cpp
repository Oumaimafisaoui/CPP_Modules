#include "Span.hpp"
#include <cstdlib>

int main()
{
    Span span = Span(4);
    Span big = Span(10000);
    try
    {
        std::cout << span.shortspane<int>() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        span.addNumber(2);
        span.addNumber(4);
        span.addNumber(5);
        span.addNumber(7);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        span.addNumber(7);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout << span.shortspane<int>() << std::endl;
    }
    catch (const std::exception e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        std::cout << span.longspane<int>() << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        //it fills the array from 0 1 to 10000 in order to see the difference
        for(size_t i = 0 ; i < big.getN(); i++)
        {
            static int n = rand() % 10 + 1;
            big.addNumber(n);
            n++;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout << big.shortspane<int>() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout << big.longspane<int>() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}