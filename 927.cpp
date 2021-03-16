//
// Created by ayttekao on 3/10/21.
//

#include <iostream>
#include <forward_list>

int main()
{
    std::forward_list<int> forwardList = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    std::forward_list<int> fListForElement;
    auto prev = forwardList.before_begin();

    auto curr = forwardList.begin();
    while (curr != forwardList.end())
    {
        if (*curr % 2)
        {
            fListForElement.push_front(*curr);
            curr = forwardList.erase_after(prev);
        }
        else
        {
            prev = curr;
            ++curr;
        }
    }

    std::cout << "Forward list (even):\n";
    for (int it : forwardList)
        std::cout << it << " ";

    std::cout << "\nFound values (odd):\n";
    for (int it : fListForElement)
        std::cout << it << " ";

    return 0;
}