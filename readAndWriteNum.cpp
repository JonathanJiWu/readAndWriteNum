#include "io.h"

int main()
{
    int num1{ ReadNum() };
    int num2{ ReadNum() };

    WriteNum(num1 + num2);
}