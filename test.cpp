// Base case for the recursion (no arguments)
#include <iostream>
int sumIntegers() {
    return 0;
}

// Recursive variadic function to accept multiple integer arguments
template <typename... Args>
int sumIntegers(int first, Args... rest) {
    return first + sumIntegers(rest...);
}

int main() {
    int result = sumIntegers(1, 2, 3, 4, 5);
    std::cout << "Sum of integers: " << result << std::endl;

    return 0;
}