//
// Created by ayttekao on 3/10/21.
//

#include <iostream>
#include <vector>
#include <list>

bool Foo(const std::list<int>& list, const std::vector<int>& vector)
{
    auto vecIt = vector.cbegin();
    auto lisIt = list.cbegin();

    if (list.size() != vector.size())
        return false;
    else
        while (vecIt != vector.cend() or lisIt != list.cend())
        {
            if (*vecIt != *lisIt)
                return false;
            vecIt++;
            lisIt++;
        }

    return true;
}

int main()
{
    std::list<int> l1 = { 1, 3, 5, 7, 9, 12 };
    std::vector<int> v2 = { 1, 3, 9 };
    std::vector<int> v3 = { 1, 3, 5, 7 };
    std::vector<int> v4 = { 1, 3, 5, 7, 9, 12 };

    bool isEqual = std::equal(std::begin(v4), std::end(v4), std::begin(l1), std::end(l1));

    std::cout << isEqual << std::endl << Foo(l1, v4);
    return 0;
}