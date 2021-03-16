//
// Created by ayttekao on 3/10/21.
//

#include <iostream>
#include <vector>
#include <list>

int main()
{
    int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };
    std::vector<int> vector;
    vector.insert(vector.end(), &ia[0], &ia[11]);
    std::list<int> list;
    list.insert(list.end(), &ia[0], &ia[11]);

    auto vecIt = vector.begin();
    auto lisIt = list.begin();

    while (vecIt != vector.end() or lisIt != list.end())
    {
        if (not *vecIt % 2)
            vecIt = vector.erase(vecIt);
        else
            vecIt++;

        if (*lisIt % 2)
            lisIt = list.erase(lisIt);
        else
            lisIt++;
    }

    std::cout << "\nVector (even):\n";
    for (int it : vector)
        std::cout << it << " ";

    std::cout << "\nList (odd):\n";
    for (int it : list)
        std::cout << it << " ";

    return 0;
}