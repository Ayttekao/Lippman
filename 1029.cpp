//
// Created by ayttekao on 3/16/21.
//

#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>
#include <string>

int main(int argc, char **argv)
{
    std::ifstream in(argv[1]);
    std::istream_iterator<std::string> istreamIterator(in), eof;
    std::vector<std::string> words;

    while(istreamIterator != eof)
        words.push_back(*istreamIterator++);

    for(const auto& word : words)
        std::cout << word << " ";
    std::cout << std::endl;
    return 0;
}