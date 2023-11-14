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
    cout << "Обчислення об'єму паралелепіпеду." << endl;
    cout << "Введіть  вихідні  дані:" << endl;
    cout << "Довжина (см) -> ";
    cin >> a;
    cout << "Ширина (см) -> ";
    cin >> b;
    cout << "Висота (см) -> ";
    cin >> c;
    cout << "Об'єм: " << a * b * c << " куб.см. " << endl;
    return 0;
}