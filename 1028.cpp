//
// Created by ayttekao on 3/16/21.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <list>

int main()
{
    std::vector<int> firstVector = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    std::vector<int> secondVector;
    std::vector<int> thirdVector;
    std::list<int> list;

    copy(firstVector.begin(), firstVector.end(), std::inserter(secondVector, secondVector.begin()));
    copy(firstVector.begin(), firstVector.end(), std::back_inserter(thirdVector));
    copy(firstVector.begin(), firstVector.end(), std::front_inserter(list));

    std::cout << "Second vector: ";
    for (auto iter : secondVector)
        std::cout << iter << " ";

    std::cout << "\nThird vector: ";
    for (auto iter : thirdVector)
        std::cout << iter << " ";

    std::cout << "\nFourth copy (list): ";
    for (auto iter : list)
        std::cout << iter << " ";

    return 0;
}