#ifndef SPAN_H
#define SPAN_H


class Span 
{
    public :
        Span(unsigned int n);
        Span(const Span& original);
        Span& operator=(const Span& original);
    private:
        Span();
        std::vector<int> v

};

#ifend