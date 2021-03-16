//
// Created by ayttekao on 3/10/21.
//

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vector = { 0 }; /* erase 0 */
    std::cout << vector.at(0) << std::endl;
    std::cout << vector.front() << std::endl;
    std::cout << *vector.begin() << std::endl;
    std::cout << vector[0] << std::endl;
    return 0;
}