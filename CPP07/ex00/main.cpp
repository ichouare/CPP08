#include "./whatever.hpp"


// class Awsome {
//     public:
//         Awsome(int _n)
//         {
//             this->_n =  _n;
//         }
//         int getN() const { return this->_n; }
//         bool operator>(Awsome const& other) const { return this->_n > other.getN(); }
//     private: 
//         int _n;

// };

// std::ostream& operator<<(std::ostream& flux, const Awsome& a) {
//     flux << a.getN();
//     return flux;
// }


int main( void ) {
    // Awsome a(2), b(5);
int a = 2;
int b = 3;
::swap( a, b );
std::cout << "a = " << a << ", b = " << b << std::endl;
std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
std::string c = "chaine1";
std::string d = "chaine2";
::swap(c, d);
std::cout << "c = " << c << ", d = " << d << std::endl;
std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
return 0;
}