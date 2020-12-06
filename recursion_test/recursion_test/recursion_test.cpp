
#include <iostream>
int recursion(int);
int main()
{
    recursion(45);
}
int recursion(int x)
{
	if (x<1)
	{
		std::cout << x << std::endl;
		return 1;
	}
	else
	{
		std::cout << x<<std::endl;
		return recursion(x - 2);
	}
    
}
