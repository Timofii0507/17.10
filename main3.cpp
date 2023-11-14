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
	double V, T, A;
	cout << "¬вед≥ть значенн€ швидкост≥: ";
	cin >> V;
	cout << "¬вед≥ть значенн€ часу: ";
	cin >> T;
	cout << "¬вед≥ть значенн€ прискоренн€: ";
	cin >> A;
	cout << "S = " << V * T + (A * T * 2) / 2 << endl;
	return 0;
}