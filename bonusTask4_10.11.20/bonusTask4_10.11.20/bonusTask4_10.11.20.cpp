// bonusTask4_10.11.20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    /*Един билет в музей струва определена сума. За групи от 5 до 10 човека има 5% отстъпка,
    за групи от 11 до 20 човека има 10% отстъпка, а за групи от 21 или повече хора отстъпката
    е 15%. По даден брой хора и цена на един билет определете колко пари ще получи музеят от хората.
    Пример:
    Вход:
    15 3,5 Изход:
    47,25*/
    cout << "Enter people count and price for 1 ticket: ";
    int people;
    double price , total;
    total = 0;
    cin >> people >> price;
    bool discount1 = (people >= 5 && people <= 10);
    bool discount2 = (people >= 11 && people <= 20);
    bool discount3 = (people > 20);
    if (discount1)
    {
        for (int i = 0; i < people; i++)
        {
            total += price - price * 0.05;
        }
    }
    else if (discount2)
    {
        for (int i = 0; i < people; i++)
        {
            total += price - price * 0.10;
        }
    }
    else if (discount3)
    {
        for (int i = 0; i < people; i++)
        {
            total += price - price * 0.15;
        }
    }
    else
    {
        total = (people * price);
    }
    cout << total << endl;
}
