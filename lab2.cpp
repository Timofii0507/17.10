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
    double ���, ���;
    cout << "������ ���� � �������: ";
    cin >> ���;
    cout << "������ ���� � �������: ";
    cin >> ���;
    while (��� >= 100) {
        ��� += 1;
        ��� -= 100;
    }
    cout << "���������� � ���: " << ��� << " ��� " << ��� << " ��� " << endl;
    return 0;
}