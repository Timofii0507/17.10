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
	cout << "������ �������� ��������: ";
	cin >> V;
	cout << "������ �������� ����: ";
	cin >> T;
	cout << "������ �������� �����������: ";
	cin >> A;
	cout << "S = " << V * T + (A * T * 2) / 2 << endl;
	return 0;
}