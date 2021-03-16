//
// Created by ayttekao on 3/16/21.
//

#include <iostream>

int main()
{
    int a = 12;
    auto f = [a](const int& b) -> int { return a + b; };
    std::cout << f(4);
    return 0;
}