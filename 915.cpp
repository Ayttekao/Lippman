//
// Created by ayttekao on 3/10/21.
//

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v1 = { 1, 3, 5, 7, 9, 12 };
    std::vector<int> v2 = { 1, 3, 9 };
    std::vector<int> v3 = { 1, 3, 5, 7 };
    std::vector<int> v4 = { 1, 3, 5, 7, 9, 12 };

    std::cout << std::boolalpha;
    std::cout << (v1 == v4) << std::endl << (v1 == v3) << std::endl;
    return 0;
}