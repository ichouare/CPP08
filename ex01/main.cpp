#include "./Span.hpp"
#include <iostream>
#include <set>
int main()
{
Span sp = Span(150);
std::set<int> set3;
for(int i = 0; i < 500 ; i++)
{
    set3.insert(i);
}
// std::set<int> arr = {0,1,2,3,4,5,6};
// sp.addNumber(6);
// sp.addNumber(3);
// sp.addNumber(17);
// sp.addNumber(9);
// sp.addNumber(11);
sp.multiAdding(set3);
std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;
return 0;
}