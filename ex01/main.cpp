#include <iostream>
#include "iter.hpp"

template <typename T>
void print(T &x)
{
    std::cout << x << std::endl;
}

template <typename T>
void increment(T &x)
{
    x++;
}

int main()
{
    int arr[] = {1, 2, 3};

    std::cout << "Before increment:" << std::endl;
    iter(arr, 3, print<int>);
    
    iter(arr, 3, increment<int>);
    std::cout << "After increment:" << std::endl;
    iter(arr, 3, print<int>);
    
    std::string str[] = {"hello", "13"};
    std::cout << std::endl;
    iter(str, 2, print<std::string>);
    
    std::cout << "\nTesting passing const: " << std::endl;
    const int ar[] = {1, 2, 3};
    iter(ar, 3, print<const int>);

}