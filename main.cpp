#include <iostream>
#include <Windows.h>
#include <math.h>
using std::cout;
using std::endl;
using std::cin;

int main()
{
	double R1, R2, R3;
	cout << "Enter R1: ";
	cin >> R1;
	cout << "Enter R2: ";
	cin >> R2;
	cout << "Enter R3: ";
	cin >> R3;
	cout << "RO = " << 1 / (1 / R1 + 1 / R2 + 1 / R3) << endl;
	return 0;
}