//
// Created by ayttekao on 3/16/21.
//

#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

int main()
{
    std::istream_iterator<int> input(std::cin), eof;
    std::ostream_iterator<int> output(std::cout, " ");
    std::vector<int> vector;
    std::copy(input, eof, std::back_inserter(vector));
    std::sort(vector.begin(), vector.end());
    std::copy(vector.begin(), vector.end(), output);
    std::cout << std::endl;
    return 0;
}