#include <iostream>
#include <thread>

void function1(char symbol)
{
    for(int i = 0; i < 200; i++)
        std::cout << symbol;
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
    std::thread worker1(function1, 'o');
    std::thread worker2(function2);

    worker1.join();
    worker2.join();

    return 0;
}