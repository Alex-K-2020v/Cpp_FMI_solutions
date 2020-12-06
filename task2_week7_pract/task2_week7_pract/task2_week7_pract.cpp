#include <iostream>
using namespace std;
int numInStr(char*, int);
int main()
{
    char str[6] = { 'a','4','b','5','6','d' };
    cout<< numInStr(str, 6);

}
int numInStr(char* str, int n)
{
	int ctr=0;
	for (int i = 0; i < n; i++)
	{
		if (*(str + i) >= 48 && *(str+i)<=57)
		{
			ctr++;
		}
	}
	return ctr;
}
