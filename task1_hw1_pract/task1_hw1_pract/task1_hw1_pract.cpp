
#include <iostream>
using namespace std;
int main()
{
	cout << "Enter day, month and year: ";
	int day, month, year,nextDay,nextMonth,nextYear;
	cin >> day >> month >> year;
	bool isLeap = (year % 4 == 0) || (year % 100 == 0 && year % 400 == 0);
	if ((month == 2 && day > 29 && isLeap == true) || (month == 2 && day > 28 && isLeap == false) ||
		((month==1 || month ==3 || month ==5 || month==7 || month ==8|| month== 10|| month == 12)&& day>31)||
		((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)||
		day<=0 || month<=0 )
	{
		cout << "Invalid date" << endl;
		return 0;
	}
	if (day==31 && month == 12)
	{
		nextDay = 1;
		nextMonth = 1;
		nextYear = year + 1;
	}
	else if ((day == 29 && month==2) || (isLeap == false && day==28 && month ==2 ))
	{
		nextDay = 1;
		nextMonth = month + 1;
		nextYear = year;
	}
	else if (((month == 4 || month == 6 || month == 9 || month == 11) && day == 30) || 
			(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10) && day == 31)
	{
		nextDay = 1;
		nextMonth = month + 1;
		nextYear = year;
	}
	else
	{
		nextDay = day + 1;
		nextMonth = month;
		nextYear = year;
	}
	
	int formula = nextDay
		+ ((153 * (nextMonth + 12 * ((14 - nextMonth) / 12) - 3) + 2) / 5)
		+ (365 * (nextYear + 4800 - ((14 - nextMonth) / 12)))
		+ ((nextYear + 4800 - ((14 - nextMonth) / 12)) / 4)
		- ((nextYear + 4800 - ((14 - nextMonth) / 12)) / 100)
		+ ((nextYear + 4800 - ((14 - nextMonth) / 12)) / 400)
		- 32045;
	int remainder = (formula + 1) % 7;
	switch (remainder)
	{
	case 0:
		cout << "Sunday ";
		break;
	case 1:
		cout << "Monday ";
		break;
	case 2:
		cout << "Tuesday ";
		break;
	case 3:
		cout << "Wednesday ";
		break;
	case 4:
		cout << "Thursday ";
		break;
	case 5:
		cout << "Friday ";
		break;
	case 6:
		cout << "Saturday ";
		break;
	default:
		break;
	}
	cout << nextDay << " ";
	switch (nextMonth)
	{
	case 1:
		cout << "January ";
		break;
	case 2:
		cout << "February ";
		break;
	case 3:
		cout << "March ";
		break;
	case 4:
		cout << "April ";
		break;
	case 5:
		cout << "May ";
		break;
	case 6:
		cout << "June ";
		break;
	case 7:
		cout << "July ";
		break;
	case 8:
		cout << "August ";
		break;
	case 9:
		cout << "September ";
		break;
	case 10:
		cout << "October ";
		break;
	case 11:
		cout << "November ";
		break;
	case 12:
		cout << "December ";
		break;
	default:
		break;
	}
	 cout<< nextYear << endl;
}
