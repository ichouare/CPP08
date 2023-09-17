#include "./easyfind.hpp"

int main()
{

try {

    std::vector<int> list{5, 1, 5, 7, 10, 11};
    Easyfind<std::vector<int>>(list, 22);
}
catch(std::exception &e)
{
    std::cerr << e.what() << std::endl;
}

}