#ifndef ARRAY_H
#define ARRAY_H

#include <cstring>
#include <iostream>
#include <exception>



template <typename T>
class Array{
    public:
        Array():m_length(0)
        {
         std::cout << "constructor called" << std::endl;  
            arr = new T[0];  // Allocates memory for a single object
        }
        Array(unsigned int n) 
        {
        std::cout << "constructor parametrized called" << std::endl; 
            if(n > 0)
            {
                arr = new T[n];
                m_length = n;
            }    
        }
        Array(const Array& original)
        {
            std::cout << "constructor called" << std::endl;
            arr = new T[0];
            *this = original;
        }
        Array& operator=(const Array& original)
        {

            std::cout << "assign operator called" <<  original.m_length << std::endl;
       
        if(this == &original)
                return(*this);
            delete [] this->arr;
            this->m_length = 0;
            this->arr = new T[original.m_length];
            while(this->m_length < original.m_length)
            {
                arr[this->m_length] = original.arr[this->m_length];
                this->m_length++;
            }
            this->m_length = original.m_length;
            return *this;
        }
        ~Array()
        {
            std::cout << "destructor called " << std::endl;
            delete []  arr;
        }
        T& operator[](unsigned int index);
        unsigned int size(){
            return m_length;
        }
        class MyException : public std::exception
        {
            public:
                const char* what() const throw()
                {
                    return "Inavild index";
                }
        };
    private:
        T *arr;
        unsigned int m_length;
};


template <typename T>
T& Array<T>::operator[](unsigned int index)
{
    if(index < 0 || index > this->size())
        throw Array<T>::MyException();
    return arr[index];
}
#endif 