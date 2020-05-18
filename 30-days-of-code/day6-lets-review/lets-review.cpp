#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>


int main() {
    int n;
    std::cin >> n;

    for (int i {0}; i < n; i++) {
        std::string word, even, odd;
        std::cin >> word;

        for (int j {0}; j < word.length(); j++) {
            if (j % 2 == 0)
                odd += word[j];
            else
                even += word[j];
        }

        std::cout << odd << " " << even << std::endl; 

    }

    return 0;
}
