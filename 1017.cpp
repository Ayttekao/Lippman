//
// Created by ayttekao on 3/16/21.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include "Sales_data.h"

int main()
{
    std::vector<Sales_data> vector;
    Sales_data test1("789-ui-987", 2, 50.00);
    Sales_data test2("123-qwe-456", 1, 25.00);
    Sales_data test3("321-wq-654", 2, 30.00);
    vector.push_back(test2);
    vector.push_back(test3);
    vector.push_back(test1);
    vector.push_back(test2);
    vector.push_back(test3);
    vector.push_back(test1);

    for (const auto& iter : vector)
        print(std::cout, iter) << std::endl;

    auto lambdaCompareIsbn = [](const Sales_data &lhs, const Sales_data &rhs) -> int { return lhs.isbn() == rhs.isbn(); };

    std::stable_sort(vector.begin(), vector.end(), lambdaCompareIsbn);

    std::cout << "After\n";
    for (const auto& iter : vector)
        print(std::cout, iter) << std::endl;

    return 0;
}