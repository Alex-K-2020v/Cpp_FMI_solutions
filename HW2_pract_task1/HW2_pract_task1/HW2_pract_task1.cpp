#include <iostream>
using namespace std;
bool isContained(char*, char*, int, int, bool, int);
int main()
{
    char str1[50];
    char str2[50];
    char input[101];
    int marker = 1;
    cin.getline(input, 101);
    for (size_t i = 0; input[i]!= ' '; i++)
    {
        str1[i] = input[i];
        marker++;
    }
    int str1Len = marker ;
    str1[str1Len - 1] = '\0';
    for (size_t i = 0; input[marker]!=' ' && input[marker] != '\0' && input[marker] != '\n' ; i++)
    {
        str2[i] = input[marker];
        marker++;
    }
    int str2Len = marker - str1Len;
    str2[str2Len] = '\0';
    bool isValid= isContained(str1, str2, str1Len, str2Len, true, 0);
    if (isValid==true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

}

bool isContained(char* str1, char* str2, int str1Len, int str2Len, bool isValid, int cnt)
{
    if (*str2 == '\0')
    {
        isValid = isContained(str1+1,str2-str2Len,str1Len,str2Len,isValid, 0);
    }
    if (*str1== '\0')
    {
        return isValid;
    }
    else
    {
        if (*(str1)!=*(str2) && *(str2+1)=='\0')
        {
            return false;
        }
        else if (*str1!=*str2 && *str2!= '\0')
        {
            isValid = isContained(str1, str2 + 1, str1Len, str2Len, isValid, cnt+1);
        }
        else if (*str1==*str2)
        {
            isValid = isContained(str1 + 1, str2 - cnt, str1Len, str2Len, isValid, 0);
        }
    }
}
