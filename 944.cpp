//
// Created by ayttekao on 3/10/21.
//

#include <iostream>
#include <string>

void Foo(std::string& s, const std::string& oldVal, const std::string& newVal)
{
    std::string::size_type pos = 0;

    while ((pos = s.find(oldVal, pos)) != std::string::npos)
    {
        s.replace(pos, oldVal.size(), newVal);
        ++pos;
    }
}

int main()
{
    std::string string = "tho batman thru fd though";
    Foo(string, "tho", "though");

    for(const auto& it : string)
        std::cout << it;
    return 0;
}