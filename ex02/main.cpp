#include "./MutantStack.hpp"
int main()
{
MutantStack<int> mstack;
// MutantStack<int>  mstack2;


mstack.push(5);
mstack.push(17);
std::cout << mstack.top() << std::endl;
// mstack.pop();
std::cout << mstack.size() << std::endl;
mstack.begin();
mstack.push(3);
mstack.push(5);
mstack.push(737);
// // //[...]
mstack.push(0);

MutantStack<int>::iterator it = mstack.begin();
MutantStack<int>::iterator ite = mstack.end();
std::cout << *it <<  std::endl;
++it;
std::cout << *it <<  std::endl;
--it;
while (it != ite)
{
std::cout << *it << std::endl;
++it;
}
MutantStack<int>  mstack2(mstack);
// mstack2 = mstack;

for(it = mstack2.begin(); it  != mstack2.end(); it++)
{
    std::cout << *it << std::endl;
}
std::stack<int> s(mstack);
return 0;
}