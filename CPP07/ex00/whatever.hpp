#ifndef WHATER_H 
#define WHATER_H
#include <iostream>



template <typename T>
void swap(T  & a, T  & b)
{
    T x  = a;
    a = b;
    b = x;
};


template <typename T>
T const& min(T const & a, T const & b)
{
    return a < b? a : b;
};

template <typename T>
T const & max(T const & a, T const & b)
{
    return a > b? a : b;
};



#endif