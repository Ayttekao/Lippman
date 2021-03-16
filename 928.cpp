//
// Created by ayttekao on 3/10/21.
//

#include <iostream>
#include <forward_list>

void Foo(std::forward_list<std::string>& forwardList, const std::string& firstString, const std::string& secondString)
{
    auto prev = forwardList.before_begin();
    auto curr = forwardList.begin();

    while (curr != forwardList.end())
        if (*curr == firstString)
        {
            prev = forwardList.insert_after(curr, secondString);
            return;
        }
        else
        {
            prev = curr;
            ++curr;
        }

    prev = forwardList.insert_after(prev, secondString);
}

int main()
{
    std::forward_list<std::string> fList = { "Sun Tzu", "Lao Tzu", "Bon Aqua" };
    Foo(fList, "Sun Tzu", "->Art of War<-");

    std::cout << "Result:\n";
    for (const std::string& it : fList)
        std::cout << it << " ";
    return 0;
}