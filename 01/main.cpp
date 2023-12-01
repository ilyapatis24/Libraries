#include <iostream>
#include "math_func.h"

using namespace std;



int main(int argc, char** argv) {
	setlocale(LC_ALL, "Russian");
    int a, b, operation;
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;
    cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
    cin >> operation;

    switch (operation)
    {
    case 1:
        cout << a << " + " << b << " = " << addition(a, b) << endl;
        break;
    case 2:
        cout << a << " - " << b << " = " << subtraction(a, b) << endl;
        break;
    case 3:
        cout << a << " * " << b << " = " << multiplication(a, b) << endl;
        break;
    case 4:
        cout << a << " / " << b << " = " << division(a, b) << endl;
        break;
    case 5:
        cout << a << " в степени " << b << " = " << exponentiation(a, b) << endl;
        break;
    default:
        break;
    }
	return 0;
}