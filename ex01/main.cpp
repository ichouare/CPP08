#include "./Span.hpp"

int main()
{
   
Span sp = Span(5);
sp.addNumber(6);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);
std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;

Span sp1 = Span(150);
std::vector<int> set3;
for(int i = 0; i < 500 ; i++)
{
    set3.push_back(i);
    //set.insert(i) // set 
}

sp1.multiAdding(set3);
std::cout << sp1.shortestSpan() << std::endl;
std::cout << sp1.longestSpan() << std::endl;
return 0;
}