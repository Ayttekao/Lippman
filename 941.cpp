//
// Created by ayttekao on 3/10/21.
//

#include <iostream>
#include <vector>

int main()
{
    std::vector<char> vector = {'r', 'e', 'f', 'e', 'r', 'e', 'c', 'e' };
    std::string string(vector.begin(), vector.end());

    /*for(const auto& it : vector)
        string += it;*/

    std::cout << string;
    return 0;
}