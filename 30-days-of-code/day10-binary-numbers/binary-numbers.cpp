#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    std::string binary = std::bitset<64>(n).to_string();

    int maximum{0}, streak{0};

    for (char &digit : binary)
    {
        if (digit == '1')
        {
            streak++;
            if (streak > maximum)
                maximum = streak;
        }
        else
        {
            streak = 0;
        }
    }

    std::cout << maximum;
    return 0;
}
