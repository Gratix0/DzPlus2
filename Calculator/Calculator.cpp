// Calculator.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    setlocale(LC_ALL, "Russian");

    double num1, num2, result;
    char operation;
    bool Flag = true;
    cout << "Если в операции используется одно число, то использоваться будет первое число\n";
    while (Flag == true) {
        cout << "Выберите операцию: \n";
        cout << "+, -, *, :, ^, S (Square Root), %, 0 - выход\n";
        cin >> operation;

        if (operation == '0')
        {
            Flag = false; break;
        }
    
        else {
        cout << "Введите число 1\n"; cin >> num1;
        cout << "Введите число 2\n"; cin >> num2;

        switch (operation)
        {
        case '+': result = num1 + num2; break;
        case '-': result = num1 - num2; break;
        case '*': result = num1 * num2; break;
        case '/': result = num1 / num2; break;
        case '^': result = pow(num1, num2); break;
        case 's': result = sqrt(num1); break;
        case '%': result = num1 / 100; break;
            default: cout << "Некорректный ввод"; break;
        
        }
        }
        cout << "Результат: " << result << "\n";
    }
    
}


