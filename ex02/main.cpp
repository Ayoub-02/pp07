#include <iostream>
#include "Array.hpp"

int main()
{
    Array<int> a(5);

    for (unsigned int i = 0; i < a.size(); i++)
        a[i] = i * 10;
    
    for (unsigned int i = 0; i < a.size(); i++)
        std::cout << a[i] << std::endl;

    try
    {
        std::cout << a[10] << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    Array<int> b = a;
    //b[0] = 999;

    std::cout << "a[0] = " << a[1] << std::endl;
    std::cout << "b[0] = " << b[1] << std::endl;

    Array<std::string> s(2); 
    s[0] = "very";
    s[1] = "good";

    std::cout << s[0] << " " << s[1] << std::endl;
}