//
// Created by ayttekao on 3/16/21.
//

#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> firstVector = { 1, 2, 3, 4, 5 };
    std::vector<int> secondVector;

    unique_copy(firstVector.begin(), firstVector.end(), std::back_inserter(secondVector));

    std::cout << std::boolalpha;
    std::cout << bool(firstVector == secondVector);
    return 0;
}