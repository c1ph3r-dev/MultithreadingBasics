#include <iostream>
#include <thread>

void function1()
{
    for(int i = 0; i < 200; i++)
        std::cout << "+";
    std::cout << std::endl;
}

void function2()
{
    for(int i = 0; i < 200; i++)
        std::cout << "-";
    std::cout << std::endl;
}

int main()
{
    function1();
    function2();

    return 0;
}