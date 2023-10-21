#ifndef SPAN_H
#define SPAN_H

#include <iostream>
#include <set>
#include <vector>
#include <cmath>
class Span 
{
    public :
        Span(unsigned int n);
        Span(const Span& original);
        Span& operator=(const Span& original);
        ~Span();
        void addNumber(int number);
        class exceptionDuplicate : public std::exception
        {
            public :
                const char* what() const throw();
        };
        int longestSpan();
        int shortestSpan();
        template <typename T>
        void multiAdding(T arg_list)
        {
            typedef  typename T::iterator iterator;
            iterator it2 = arg_list.begin();
            unsigned int i = 0;
            while(it2 != arg_list.end())
            {
                if(i == N )
                    throw exceptionDuplicate();
                arr.insert(*it2);
                it2++;
                i++;
            }
        }
    void diplaySpan();
    private:
        Span();
        std::set<int> arr;
        unsigned int N;
        std::set<int>::iterator it;

};

#endif