#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <unordered_map>

int main()
{

    int n;
    std::string phoneNumber, name;
    std::unordered_map<std::string, std::string> phoneBook;

    std::cin >> n;

    for (int i{0}; i < n; i++)
    {
        std::cin >> phoneNumber >> name;
        phoneBook.insert({phoneNumber, name});
    }

    std::string search;
    while (std::cin >> search)
    {
        if (phoneBook.find(search) != std::end(phoneBook))
        {
            std::cout << search << "=" << phoneBook[search] << std::endl;
        }
        else
        {
            std::cout << "Not found" << std::endl;
        }
    }

    return 0;
}