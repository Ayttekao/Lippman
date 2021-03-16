//
// Created by ayttekao on 3/10/21.
//

#include <iostream>
#include <deque>

int main()
{
    std::deque<std::string> deque;
    std::string word;
    int size;
    auto it = deque.cbegin();

    std::cin >> size;
    while (deque.size() != size)
    {
        std::cin >> word;
        it = deque.insert(it, word);
    }
    for (it = deque.cbegin(); it != deque.cend(); it++)
        std::cout << *it << std::endl;
    return 0;
}