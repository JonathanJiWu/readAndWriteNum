#include <iostream>

int ReadNum(int num)
{
    std::cout << "give a num: \n";

    std::cin >> num;
    return num;
}

void WriteNum(int num)
{
    std::cout << num;
}