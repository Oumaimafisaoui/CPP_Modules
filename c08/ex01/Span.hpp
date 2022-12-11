#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <limits>
#include <iostream>
class Span{
    private:
        unsigned int N;
        Span();
        std::vector<int> elements;
    public:
        Span(unsigned int N);
        ~Span();
        Span(const Span &obj);
        Span &operator=(const Span &obj);

        //because we do not know what is the type of the number
        template <typename T>

        void addNumber(T n)
        {
            if(elements.size() == N)
                throw std::out_of_range("Span is full");
            else if (elements.size() >= elements.capacity())
                throw std::logic_error("size is bigget than capacity");
            elements.push_back(n);
        }

        template <typename T>

        T shortspane(void)
        {
            size_t index;

            if(elements.size() < 2)
                throw std::logic_error("Short span error, teh vector has less that two elements.");

            std::sort(elements.begin(), elements.end());
            T shortspan = std::numeric_limits<T>::max();

            for(index = 0; index < elements.size(); index++)
            {
                shortspan = std::min(shortspan, elements[index] - elements[index - 1]);
            }
            return (shortspan);
        }

        template <typename T>

        T longspane(void)
        {
            if(elements.size() < 2)
                throw std::logic_error("Short span error.");

            std::sort(elements.begin(), elements.end());

            return ((elements.back()) - elements.front());
        }
};
#endif