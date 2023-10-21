#include "./easyfind.hpp"

int main()
{

    std::vector<int> list;

    for(int i = 0; i < 10 ; i++)
{
    list.push_back(i);
}
try {

    Easyfind<std::vector<int> >(list, 22);
}
catch(std::exception &e)
{
    std::cerr << e.what() << std::endl;
}

try{
    Easyfind<std::vector<int> >(list, 1);
}
catch(std::exception &e)
{
     std::cerr << e.what() << std::endl;
}

}