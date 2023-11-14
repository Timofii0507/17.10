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
    double грн, коп;
    cout << "Введіть суму у гривнях: ";
    cin >> грн;
    cout << "Введіть суму у копійках: ";
    cin >> коп;
    while (коп >= 100) {
        грн += 1;
        коп -= 100;
    }
    cout << "Коригована с ума: " << грн << " грн " << коп << " коп " << endl;
    return 0;
}