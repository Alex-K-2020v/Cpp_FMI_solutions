#include <iostream>
using namespace std;
bool isAValidId(char*, int);
void printStr(char*, int);
int main()
{
    char str[5] = { 'a','b','c','d','e' };
    char str2[5] = { 'A','3','c','B','e' };
    char str3[5] = { '-',' ','!','#','%' };
    printStr(str,5);
    cout << isAValidId(str, 5) << endl;
    printStr(str2, 5);
    cout << isAValidId(str2, 5) << endl;
    printStr(str3, 5);
    cout << isAValidId(str3, 5) << endl;
}
bool isAValidId(char* str, int n)
{
    for (size_t i = 0; i < n; i++)
    {
        if (!((*(str+i)>=48 && *(str + i) <= 57) || (*(str + i) >= 65 && *(str + i) <= 90) || (*(str + i) >= 97 && *(str + i) <= 122)))
        {
            return false;
        }
    }
    return true;
}
void printStr(char* str, int n)
{
    for (size_t i = 0; i < n; i++)
    {
        cout << *(str + i)<< " ";

    }
    cout << endl;
}