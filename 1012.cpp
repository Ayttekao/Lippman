//
// Created by ayttekao on 3/15/21.
//

#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include "Sales_data.h"

int compareIsbn(const Sales_data &lhs, const Sales_data &rhs)
{
    return lhs.isbn() == rhs.isbn();
}

int main()
{
    std::vector<Sales_data> vector;
    Sales_data test1("789-mad-404", 2, 75.00);
    Sales_data test2("123-qkwe-123", 1, 25.00);
    Sales_data test3("321-asdc-949", 2, 90.00);
    vector.push_back(test2);
    vector.push_back(test3);
    vector.push_back(test1);
    vector.push_back(test2);
    vector.push_back(test3);
    vector.push_back(test1);

    for (const auto& iter : vector)
        print(std::cout, iter) << std::endl;

    std::stable_sort(vector.begin(), vector.end(), compareIsbn);

    std::cout << "After\n";
    for (const auto& iter : vector)
        print(std::cout, iter) << std::endl;

    return 0;
}