#ifndef EASYFIND_H
#define EASYFIND_H


#include <string>
#include <vector>
#include <iostream>
#include <iterator>
#include <algorithm>
#include <exception>

class myException : public std::exception {
    public:
        const char * what() const throw();
};

const char* myException::what() const throw()
{
    return "not found elememnt !!!";
}

template <typename T>
void  Easyfind(T lst, int a)
{
    typename T::iterator result;
    result = std::find(lst.begin(), lst.end(), a); 
    if(result == lst.end())
       throw myException();
    std::cout << *result << std::endl; 
};


#endif

