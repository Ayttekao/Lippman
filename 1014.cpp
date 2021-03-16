//
// Created by ayttekao on 3/16/21.
//

#include <iostream>

int main()
{
    auto f = [](int firstNum, int secondNum){ return firstNum + secondNum; };
    std::cout << f(2, 124);
    return 0;
}