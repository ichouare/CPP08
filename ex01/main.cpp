#include "./Span.hpp"

int main()
{
try {   
Span sp = Span(5);
sp.addNumber(6);
// sp.addNumber(3);
// sp.addNumber(17);
// sp.addNumber(9);
// sp.addNumber(11);
// sp.addNumber(11);
std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;
std::cout << "------" << std::endl;
// diplaySpan();

Span sp1 = Span(150);
sp1 = sp;
std::vector<int> set3;
for(int i = 0; i < 100 ; i++)
{
    set3.push_back(i);
    // set.insert(i) // set 
}
set3.push_back(50);

sp1.multiAdding(set3);
std::cout << sp1.shortestSpan() << std::endl;
std::cout << sp1.longestSpan() << std::endl;
}catch(std::exception& e)
{
    std::cout << e.what() << std::endl;
}
return 0;
}