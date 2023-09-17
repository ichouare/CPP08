#include "./Span.hpp"

Span::Span()
{

}

Span::Span(unsigned int N):N(N)
{

}


// Span::Span(const Span& original)
// {
//     *this = original;
// }

// Span& Span::operator=(const Span& original)
// {
//     // if(this = &original)
//     //     return(*this);
    
// }

void Span::addNumber(int number)
{
 
    if(arr.size() < N)
    {
        if(arr.size() != 0)
        {
            it = arr.find(number);
            if(it == arr.end())
                throw -1;

        }
        std::cout <<": " <<*it << std::endl;
        arr.insert(number);
    }
    std::cout << "myset contains:";
  for (it=arr.begin(); it!=arr.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';
}


