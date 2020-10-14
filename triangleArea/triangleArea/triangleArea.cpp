#include <iostream>
#include <cmath>
int main()
{
	double a, b, c, area, halfPerimeter;

	std::cout << "Select a, b and c: ";
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;

	if (a + b <= c || a + c <= b || b + c <= a || a <= 0 || b <= 0 || c <= 0)
	{
		std::cout << "Invalid parameter(s)!\n";
		return 0;
	}
	halfPerimeter = (a + b + c) / 2.0;
	area = sqrt(halfPerimeter*(halfPerimeter-a)*(halfPerimeter-b)*(halfPerimeter-c));
	std::cout << "The area of the triangle is: " << area << "\n";
}
