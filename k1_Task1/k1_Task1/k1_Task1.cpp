
#include <iostream>
using namespace std;
int main()
{
    //task a)
    cout << "Enter [carrots] [cucumbers] [lettuce] [paprica] [tomato] [is Mercury in retrograde]: ";
    int carrots, cucumbers, lettuce, paprica, tomato;
    bool isRetrograde;
    cin >> carrots >> cucumbers >> lettuce >> paprica >> tomato >> isRetrograde;
    bool willEatCake = isRetrograde && 
        ((carrots == 2 && cucumbers == 2 && lettuce == 1 && paprica == 3) || 
            //if Pesho ate 2 carrots, 2 cucumbers, 1 lettuce, 3 paprica and Mercury is in retrograde he will eat cake
        (carrots == 1 && cucumbers == 1 && paprica == 1 && tomato == 2));
            //if Pesho ate 1 carrot, 1 cucumber, 1 paprica, 2 tomatos and Mercury is in retrograde he will eat cake
    cout << willEatCake << endl;
    // task b)
    cout << "Enter a 3 digit integer: ";
    int n;
    cin >> n;
    while (abs(n)<100) // checking if the variable is valid
    {
        cout << "Enter a valid value of N: ";
        cin >> n;
    }
    bool hasN2EqualDigits = (n % 10 == n / 100) || (n % 10 == (n / 10) % 10) || (n / 100 == (n / 10) % 10);
    /*if the last digit is equal to the first or the last digit is equal to the second or the first digit is equal to the second
    then n has at least 2 equal digits*/
    cout << hasN2EqualDigits;
}

