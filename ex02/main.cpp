#include "./MutantStack.hpp"
int main()
{
MutantStack<int> mstack;
MutantStack<int> mstack1;
mstack.push(5);
mstack.push(17);
std::cout << mstack.top() << std::endl;
mstack.pop();
std::cout << mstack.size() << std::endl;
mstack.push(3);
mstack.push(5);
mstack.push(737);
// //[...]
mstack.push(0);
mstack1 = mstack;
MutantStack<int>::iterator it = mstack.begin();
// MutantStack<int>::iterator it1 = mstack1.begin();
MutantStack<int>::constIterator ite1 = mstack1.cbegin();
MutantStack<int>::iterator ite = mstack.end();
MutantStack<int>::constIterator itec1 = mstack1.cend();
++it;
--it;
std::cout << *it << std::endl;
while (ite1 != itec1)
{
std::cout << *ite1 << std::endl;
++ite1;
}
// std::stack<int> s(mstack);
return 0;
}