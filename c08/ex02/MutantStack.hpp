#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP


template <typename T>

class MutantStack : public std::stack<T>
{
    public:
        MutantStack();
        ~MutantStack();  
        MutantStack(const MutantStack &obj);

        MutantStack& operator=(const MutantStack &obj);
        
        // use the underlying containcer iterators to iterate on stack

        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;

        // code being and end for the iterators to return an iterator

};





#endif