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
    cout << "���������� ������ �� ���������� ��������." << endl;
    double a, b;
    cout << "������  ������  ���:" << endl;
    cout << "������� ����� (������� �������� � ������ ���������) -> ";
    cin >> a;
    cout << "³������ �� �������, �� ���������� ������� ������ (��) -> ";
    cin >> b;
    cout << "³������ �� ���������� �������� " << b * a << " ��. " << endl;
    return 0;
}