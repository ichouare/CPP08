#include "./Span.hpp"

Span::Span()
{

}

Span::Span(unsigned int N):N(N)
{

}


Span::Span(const Span& original)
{
    *this = original;
}

Span& Span::operator=(const Span& original)
{
    if(this = &original)
        return(*this);
    it = original.arr.begin();
    while(it != original.arr.end())
    {
        arr.addNumber(*it);
        it++;
    }
    return (*this)

}


const char* Span::exceptionDuplicate::what() const throw()
{
    return "DUplicate Number sorry !!";
}

void Span::addNumber(int number)
{
 
    it = arr.end();
    if(arr.size() < N)
    {
        if(arr.size() == 0)
        {
            arr.insert(number);
            std::cout << "here" << std::endl;
        }
        else
        {
            it = arr.find(number);
            if(it != arr.end())
            {
                throw Span::exceptionDuplicate();
                std::cout <<": " << "hrer" << std::endl;
            }
            else
                arr.insert(number);

        }
    }
}


int Span::longestSpan()
{
    it = arr.end();
    if(arr.size() <= 1)
        throw -1;
    return abs(*(--it)) - abs(*(arr.begin()));
}

void  Span::diplaySpan()
{
    std::cout << "myset contains:";
  for (it=arr.begin(); it!=arr.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';

}


int  Span::shortestSpan()
{
    std::set<int>::iterator it2 = arr.begin();
    int shortest_span = 0;
    int span = *it2;
    shortest_span =   abs(*(++it2)) - abs(span);
    it2 = arr.begin();
    while(it2 != arr.end())
    {
        it = it2;
        it++;
        while(it != arr.end())
        {
            span =   abs(*it2 - *it);
            if(span < shortest_span)
                shortest_span = span;
            it++;
        }
     it2++;   
    }
    return(shortest_span);
}


void Span::multiAdding(std::set<int> arg_list)
{
    std::set<int>::iterator it2 = arg_list.begin();
    while(it2 != arg_list.end() && arr.size() < N)
    {
      // std::cout << "here" << std::endl;
      arr.insert(*it2);
      it2++;
    }
}