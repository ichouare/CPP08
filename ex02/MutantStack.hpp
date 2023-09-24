#ifndef MUTANSTACK_H
#define MUTANSTACK_H

#include <iostream>
#include <stack>
#include <deque>


template <class Type, class container= std::deque <Type> >
class MutantStack : public std::stack<Type, container> {
    public:
    typedef typename std::stack<Type,container>::container_type::iterator iterator;
    typedef typename std::stack<Type,container>::container_type::const_iterator constIterator;
    typedef typename std::stack<Type,container>::container_type::reverse_iterator revIterator;
    typedef typename std::stack<Type,container>::container_type::const_reverse_iterator constRevIterator;
    MutantStack(){}
    MutantStack(const MutantStack<Type, container>& original){
      this  = original;
    }
    MutantStack& operator=(const MutantStack<Type, container>& original){
      if(this != &original)
      {
         this->c = original.c;
      }
      return (*this);
    }
    virtual ~MutantStack(){}

    iterator begin(){
      return (this->c.begin());
    } 

    iterator end()
    {
      return (this->c.end());
    }
    
    constIterator cbegin(){
      return (this->c.cbegin());
    }
    constIterator cend()
    {
      return (this->c.cend());
    }

    revIterator rbegin()
    {
      return (this->c.rbegin());
    }

    revIterator rend()
    {
      return (this->c.rend());
    }
    constRevIterator crbegin()
    {
      return (this->c.crbegin());
    }

    constRevIterator crend()
    {
      return (this->c.crend());
    }
};  

#endif