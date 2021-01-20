// week10_task8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void evaluate(const char*, size_t&, size_t&, size_t&);
int main()
{
	const char str[15] = {"abc13AD ddA12"};
	size_t counterCap = 0;
	size_t counterSmall = 0;
	size_t counterDigits = 0;
	evaluate(str, counterCap, counterSmall, counterDigits);
	cout << counterCap << " " << counterSmall << " " << counterDigits << endl;


}

void evaluate(const char* str, size_t &counterCap, size_t &counterSmall, size_t &counterDigits)
{
	if (*str=='\0')
	{
		return;
	}
	if ((*str)>='A' && (*str)<='Z')
	{
		counterCap++;
	}
	else if ((*str) >= 'a' && (*str) <= 'z')
	{
		counterSmall++;
	}
	else if ((*str) >= '0' && (*str) <= '9')
	{
		counterDigits++;
	}
	evaluate(str+1, counterCap, counterSmall, counterDigits);
}