#include <iostream>
#include <Windows.h>
#include <cmath>
using std::cout;
using std::endl;
using std::cin;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double R, p = 3.14 ;
    cout << "������  �����  ��� -> ";
    cin >> R;
    cout << "��'�� ���i: " << (4.0 / 3.0) * p * pow(R, 3) << endl;
    return 0;
}