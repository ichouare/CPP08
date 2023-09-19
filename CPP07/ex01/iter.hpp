#ifndef ITER_H
#define ITER_H

#include <iostream>

template <typename N,  typename E>
void iter(N *ptr, E lenght, void  (*fun)( const N &))
{
    int  i = 0;
    while(i < lenght)
    {
         fun(ptr[i]);
       i++;
    }
} 


int sum(int x, int y)
{
    return x + y;
}

float sum(float x, float y)
{
    return x + y;
}




#endif