// week10_task9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
bool swapcase(char*);
int main()
{
    char str[15] = {"abcdEFFFqRs"};
    swapcase(str);
    for (size_t i = 0; i < 11; i++)
    {
        std::cout << str[i];
    }
    std::cout << std::endl;
}

bool swapcase(char* str)
{
    if (*str == '\0') {
        return true;
    }
    if (*str >= 97 && *str <= 122) {
        *str -= 32;
    }
    else if (*str >= 65 && *str <= 90) {
        *str += 32;
    }

    return swapcase(str + 1);
}

