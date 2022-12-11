#include "Span.hpp"

int main()
{
    Span span = Span(4);

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
    std::cout << "short span with multiple elements\n";
    try
    {
        std::cout << span.shortspane<int>() << std::endl;
    }
    catch (const std::logic_error& e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        span.longspane<int>();
    }
    catch (const std::logic_error& e)
    {
        std::cout << e.what() << std::endl;
    }
     return 0;
}