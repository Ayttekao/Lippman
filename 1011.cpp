//
// Created by ayttekao on 3/13/21.
//

#include <iostream>
#include <vector>
#include <algorithm>

void elimDups(std::vector<std::string>& words)
{
    std::sort(words.begin(), words.end()); /* сортирока */
    auto end_unique = std::unique(words.begin(), words.end()); /* переупорядочивает исходный диапазон */
    words.erase(end_unique, words.end()); /* удаление не уникальных слов */
}

bool isShorter(const std::string& firstString, const std::string& secondString)
{
    return firstString.size() < secondString.size();
}

int main()
{
    std::vector<std::string> words = { "fox", "jumps", "over", "quick", "red", "red", "slow", "the", "the", "turtle" };
    elimDups(words);
    std::stable_sort(words.begin(), words.end(), isShorter);

    for (const auto& string : words)
        std::cout << string << " ";
    std::cout << std::endl;
    return 0;
}