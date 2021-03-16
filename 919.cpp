//
// Created by ayttekao on 3/10/21.
//

#include <iostream>
#include <list>

int main()
{
    std::list<std::string> list;
    std::string word;
    int size;
    auto it = list.cbegin();

    std::cin >> size;
    while (list.size() != size)
    {
        std::cin >> word;
        it = list.insert(it, word);
    }
    for (it = list.cbegin(); it != list.cend(); it++)
        std::cout << *it << std::endl;
    return 0;
}