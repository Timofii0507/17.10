#include <iostream>
#include <Windows.h>
#include <math.h>
using std::cout;
using std::endl;
using std::cin;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int year;
	cout << "Ââåä³òü ð³ê: ";
	cin >> year;
	int daysInYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) ? 366 : 365;
	cout << "In" << year << "year = " << daysInYear << " days" << endl;
	return 0;
}