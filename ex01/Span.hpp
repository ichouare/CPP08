#ifndef SPAN_H
#define SPAN_H

#include <iostream>
#include <set>
class Span 
{
    public :
        Span(unsigned int n);
        Span(const Span& original);
        Span& operator=(const Span& original);
        void addNumber(int number);
        class exceptionDuplicate : public std::exception
        {
            public :
                const char* what() const throw();
        };
        int longestSpan();
        int shortestSpan();
        // void multiAdding(...);
        void diplaySpan();
    private:
        Span();
        std::set<int> arr;
        unsigned int N;
        std::set<int>::iterator it;

};

#endif