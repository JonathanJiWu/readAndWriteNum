#include "io.h"

int main()
{
    int num1{};
    int num2{};

    num1 = ReadNum(num1);
    num2 = ReadNum(num2);

    WriteNum(num1 + num2);
}