#include <iostream>
#include <vector>

bool Foo(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end, int value)
{
    std::vector<int>::const_iterator it;
    for (it = begin; it != end; it++)
        if (*it == value)
            return true;

   return false;
}

int main()
{
    int value;
    int size = 5;
    std::vector<int> myVector;
    myVector.reserve(size);

    for (int count = 0; count < size; ++count)
        myVector.push_back(count);

    std::cin >> value;
    std::cout << Foo(myVector.cbegin(), myVector.cend(), value);
    return 0;
}
