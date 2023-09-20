#ifndef MUTANSTACK_H
#define MUTANSTACK_H

#include <iostream>
#include <stack>


template <typename E>
class MutantStack{
    private:
     std::stack<E> m_stack; 
    public:
    MutantStack(){

    }
    MutantStack(const MutantStack& original)
    {
    }
    MutantStack& operator=(const MutantStack& original)
    {

    }
    ~MutantStack()
    {

    }
    bool empty() const
    {
       return m_stack.empty();
    }
    size_t size() const
    {
        return m_stack.size();
    }
    T& top()
    {
       return  m_stack.top();
    }
};

#endif 
