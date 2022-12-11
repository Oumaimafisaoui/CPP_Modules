#include "Span.hpp"

#include <iostream>


Span::Span(): N(0)
{
    std::cout << "Default constructor" << std::endl;
}
Span::Span(unsigned int N): N(N)
{
    std::cout << "Constructor for span" << std::endl;
    this->elements.reserve(N);
}
Span::~Span()
{
    std::cout << "Distructor for span" << std::endl;
    this->elements.clear();
}
Span::Span(const Span &obj)
{
    std::cout << "Copy Constructor for span" << std::endl;
    *this = obj;
}

Span &Span::operator=(const Span &obj)
{
    std::cout << "Operator for span" << std::endl;
    this->N = obj.N;
    this->elements.reserve(obj.elements.capacity());
    this->elements.assign(obj.elements.begin(), obj.elements.end());
    return (*this);
}
