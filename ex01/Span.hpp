#ifndef SPAN_H
#define SPAN_H

#include <iostream>
#include <set>
#include <vector>

class Span 
{
    public :
        Span(unsigned int n);
        // Span(const Span& original);
        // Span& operator=(const Span& original);
        void addNumber(int number);
        class exceptionDuplicate : public std::exception
        {
            public :
                const char* what() const throw();
        };
        int longestSpan();
        int shortestSpan();
        void multiAdding(std::set<int> arg_list);
        void diplaySpan();
    private:
        Span();
        std::set<int> arr;
        unsigned int N;
        std::set<int>::iterator it;

};

#endif