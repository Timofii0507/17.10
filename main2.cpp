#include <iostream>
#include <Windows.h>
#include <math.h>
using std::cout;
using std::endl;
using std::cin;

int main()
{
	double R2, R, pi = 3.14;
	cout << "Enter R2: ";
	cin >> R2;
	cout << "Enter R: ";
	cin >> R;
	cout << "S = " << pi * R2 << endl;
	cout << "L = " << 2 * pi * R << endl;
	return 0;
}