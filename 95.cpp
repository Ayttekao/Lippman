//
// Created by ayttekao on 3/9/21.
//

#include <iostream>
#include <vector>

std::vector<int>::const_iterator Foo(std::vector<int>::const_iterator begin,
                                     std::vector<int>::const_iterator end, int value)
{
    std::vector<int>::const_iterator it;
    for (it = begin; it != end; it++)
        if (*it == value)
            break;

    return it; /* return it (find element) or end */
}

int main()
{
    int value;
    int size = 5;
    std::vector<int>::const_iterator it;
    std::vector<int> myVector;
    myVector.reserve(size);

    for (int count = 0; count < size; ++count)
        myVector.push_back(count);

    std::cin >> value;

    it = Foo(myVector.cbegin(), myVector.cend(), value);
    if (it == myVector.cend())
        std::cout << "The function did not find the element";
    else
        std::cout << *it;

    return 0;
}
