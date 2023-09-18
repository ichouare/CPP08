#include "./Span.hpp"

int main()
{
    try{

        Span sp = Span(6);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        // sp.addNumber(0.00009);
        // sp.addNumber(11);
        sp.addNumber(9);
        sp.addNumber(15);
        sp.diplaySpan();
        std::cout << sp.longestSpan() << std::endl;
        std::cout << sp.shortestSpan() << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
// std::cout << sp.shortestSpan() << std::endl;
// std::cout << sp.longestSpan() << std::endl;
return 0;
}