#include "./Span.hpp"

Span::Span()
{

}

Span:Span(unsigned int n)
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
    
}


