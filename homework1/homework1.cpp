#include <iostream>
#include <Windows.h>
#include "Fraction.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Fraction fraction;
    fraction.setChis(1, 0);
    fraction.setZnam(3, 0);
    fraction.setChis(1, 1);
    fraction.setZnam(4, 1);
    
    char diya;
    cout << "Напишіть знак дії, яку ви збираєтеся виконати: ";
    cin >> diya;
    cout << "\033[2J";
    if (diya == '*') fraction.getMult();
    else if (diya == '/') fraction.getDiv();
    else if (diya == '+') cout << "Результат додавання: " << fraction.getPlus();
    else if (diya == '-') cout << "Результат віднімання: " << fraction.getMinus();
    else cout << "Такої дії не існує!";
}