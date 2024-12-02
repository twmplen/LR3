#include <iostream>
#include <cmath>

const double Pi = 3.14159265358979323846;
const double E = 2.71828182845904509080;
const double inf = 1.79769e308;
const double eps = 1e-3;

int readInt() {
    int input;
    if (!(std::cin >> input) || (std::cin.peek() != '\n')) {
        std::cin.clear();
        while (std::cin.get() != '\n');
        return -2147483648;
    }
    return input;
}

double readDouble() {
    double input;
    if (!(std::cin >> input) || (std::cin.peek() != '\n')) {
        std::cin.clear();
        while (std::cin.get() != '\n');
        return inf;
    }
    return input;
}

double Min(double x, double y) {
    return x > y ? y : x;
}

double Abs(double x) {
    return x < 0 ? -x : x;
}

double Ln(double x) {
    if (x <= 0) return -inf;
    if (x > 1e8) {
        double res = 0;
        while (x > 2) {
            x /= E;
            res++;
        }
        return res;
    }

    int add = 0;
    while (x > 2) {
        x /= E;
        add++;
    }

    if (x < 1) {
        return -Ln(1 / x) + add;
    }

    x--;
    double res = x;
    double lst = x;
    
    for (double n = 1; n <= 100; n++) {
        lst *= (-x) * n / (n + 1);
        res += lst;
    }

    return res + add;
}

double comp(double x) {
    x = x - 2 * Pi * (int)(x / (2 * Pi));
    if (x < 0) {
        x += 2 * Pi;
    }
    return x;
}

double Sin(double x) {
    x = comp(x);
    double res = x;
    double lst = x;
    
    for (double n = 1; n < 10; n++) {
        lst = lst * (-1) * x * x / (2 * n) / (2 * n + 1);
        res += lst;
    }
    return res;
}

double Cos(double x) {
    x = comp(x);
    double res = 1;
    double lst = 1;
    
    for (double n = 1; n < 20; n++) {
        lst = lst * (-1) * x * x / (2 * n) / (2 * n - 1);
        res += lst;
    }
    return res;
}

int main() {
    std::cout << "Программа для нахождения минимального из значений a = sin(x), b = cos(x), c = ln(|x|)\n";
    std::cout << "Выполнил Смольский Александр, студент группы 453505.\n\n";
    
    while (true) {
        std::cout << "Введите 1, чтобы выполнить программу, или введите 2, чтобы закончить работу программы: ";
        int type = readInt();
        if (type != 1 && type != 2) {
            std::cout << "Неправильный формат ввода.\n\n";
            continue;
        }
        if (type == 2) {
            std::cout << "Выполнение программы завершено.\n";
            break;
        }
        
        std::cout << "Введите аргумент x: ";
        double x = readDouble();
        while (x == inf) {
            std::cout << "Введите аргумент x заново: ";
            x = readDouble();
        }

        double trigX = comp(x);
        double a = Sin(trigX);
        double b = Cos(trigX);
        double c = (x != 0) ? Ln(Abs(x)) : 0;

        std::cout << "sin(x) = " << a << "\n" << "cos(x) = " << b << "\n" << "ln(|x|) = " << c << "\n\n";
        std::cout << "Минимальное значение равно " << Min(Min(a, b), c) << "\n\n";
        std:: cout << "sin " << sin(x) << "cos " << cos(x) << "ln " << log(fabs(x)) << std:: endl;
    }
    return 0;
}