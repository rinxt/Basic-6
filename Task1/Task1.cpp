#include <iostream>
#include <string>
#include <sstream>
#include "calc.h"

int main() {
    system("chcp 1251");

    Calculator calculator;
    double x;
    double y;
    double result;
    char operation;
    std::string answer;
    std::ostringstream sx;
    std::ostringstream sy;
    std::ostringstream sresult;

    std::cout << "Введите первое число: ";
    std::cin >> x;

    std::cout << "Введите второе число: ";
    std::cin >> y;

    std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
    std::cin >> operation;

    sx << x;
    sy << y;

    switch (operation) {
    case '1':
        result = calculator.add(x, y);
        sresult << result;
        answer = sx.str() + " плюс " + sy.str() + " = " + sresult.str();
        break;
    case '2':
        result = calculator.subtract(x, y);
        sresult << result;
        answer = sx.str() + " минус " + sy.str() + " = " + sresult.str();
        break;
    case '3':
        result = calculator.multiply(x, y);
        sresult << result;
        answer = sx.str() + " умножить на " + sy.str() + " = " + sresult.str();
        break;
    case '4':
        if (y == 0) {
            std::cout << "Деление на ноль!";
            return 1;
        }
        result = calculator.divide(x, y);
        sresult << result;
        answer = sx.str() + " разделить на " + sy.str() + " = " + sresult.str();
        break;
    case '5':
        result = calculator.power(x, y);
        sresult << result;
        answer = sx.str() + " в степени " + sy.str() + " = " + sresult.str();
        break;
    default:
        std::cout << "Неверная операция" << std::endl;
        return 1;
    }

    std::cout << answer << std::endl;
    return 0;
}

