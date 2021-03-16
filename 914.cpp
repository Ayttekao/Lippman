//
// Created by ayttekao on 3/9/21.
//

#include <iostream>
#include <list>
#include <vector>
#include <string>

int main()
{
    std::list<std::string> names;
    std::vector<const char*> oldstyle = {"test", "test0", "test1"};

    names.assign(oldstyle.cbegin(), oldstyle.cend());

    for (const auto & name : names)
        std::cout << name << std::endl;

    return 0;
}