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
    double a, b, c;
    cout << "���������� ��'��� �������������." << endl;
    cout << "������  ������  ���:" << endl;
    cout << "������� (��) -> ";
    cin >> a;
    cout << "������ (��) -> ";
    cin >> b;
    cout << "������ (��) -> ";
    cin >> c;
    cout << "��'��: " << a * b * c << " ���.��. " << endl;
    return 0;
}