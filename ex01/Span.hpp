#ifndef SPAN_H
#define SPAN_H

#include <iostream>
#include  <set>

class Span 
{
    public :
        Span(unsigned int N);
        // Span(const Span& original);
        // Span& operator=(const Span& original);
        void addNumber(int number);
    private:
        Span();
        std::set<int> arr;
        unsigned int N;
        std::set<int>::iterator it;

};

#endif