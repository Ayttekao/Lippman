//
// Created by ayttekao on 3/10/21.
//

#include <iostream>
#include <list>
#include <deque>

int main()
{
    std::list<int> list = { 1, 2, 3, 4, 5, 6 };
    std::deque<int> deque1;
    std::deque<int> deque2;

    for (int it : list)
        if (it % 2)
            deque1.push_back(it);
        else
            deque2.push_back(it);

    std::cout << "Deque 1 (odd):\n";
    for (int it : deque1)
        std::cout << it << " ";

    std::cout << "\nDeque 2 (even):\n";
    for (int it : deque2)
        std::cout << it << " ";

    return 0;
}