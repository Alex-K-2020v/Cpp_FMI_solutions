
#include <iostream>

int main()
{
    int x, y;

    std::cout << "Insert X and Y (1 or 0): ";
    std::cin >> x;
    std::cin >> y;
    if (x==1 && y==1)
    {
        std::cout << "False \n";
        return 0;
    }
    std::cout << "True \n";
}

