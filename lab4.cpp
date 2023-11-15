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
    cout << "Обчислення відстані між населеними пунктами." << endl;
    double a, b;
    cout << "Введіть  вихідні  дані:" << endl;
    cout << "Масштаб карти (кількість кілометрів в одному сантиметрі) -> ";
    cin >> a;
    cout << "Відстань між точками, що зображують населені пункти (см) -> ";
    cin >> b;
    cout << "Відстань між населеними пунктами " << b * a << " км. " << endl;
    return 0;
}