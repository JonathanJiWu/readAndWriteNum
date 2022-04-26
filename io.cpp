#include <iostream>

int ReadNum()
{
    std::cout << "give a num: \n";
    int num{};
    std::cin >> num;
    return num;
}

void WriteNum(int num)
{
    std::cout << num;
}