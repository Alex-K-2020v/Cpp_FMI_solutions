#include <iostream>

int main()
{
    std::cout << "Insert K and X - K should be 1 digit and X should be 3 digits: ";
    int k, x, temp;
    std::cin >> k;
    std::cin >> x;
    temp = x;
    for (int i = 3; i >= k; i--)
    {
        if (i == k)
        {
            std::cout << temp % 10;
            return 0;
        }
        temp = temp / 10;
    }
}


