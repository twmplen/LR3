#include <iostream>
#include <cmath>

const double Pi = 3.14159265358979323846;

// Приводим x в диапазон [0, 2*Pi)
double comp(double x) {
    while (x >= 2 * Pi) {
        x -= 2 * Pi;
    }
    while (x < 0) {
        x += 2 * Pi;
    }
    return x;
}

long long factorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

double Sin(double x) {
    x = comp(x);  
    double rez = 0;
    
    for (int n = 0; n < 20; ++n) {  
        int a = 2 * n + 1;
        double b = pow(-1, n) * pow(x, a) / factorial(a);
        rez += b;
    }
    return rez;
}

double Cos(double x) {
    x = comp(x);  
    double rez = 0;

    for (int n = 0; n < 20; ++n) {  
        int a = 2 * n;
        double b = pow(-1, n) * pow(x, a) / factorial(a);
        rez += b;
    }
    return rez;
}

int readInt() {
    int input;
    
    if (!(std::cin >> input)) {
        std::cin.clear(); 
        while (std::cin.get() != '\n'); 
        return -2147483648; 
    }
   
    if (std::cin.peek() != '\n') {
        std::cin.clear(); 
            while (std::cin.get() != '\n');
        return -2147483648; 
    }

    return input;
}


int main() {

    std:: cout << "Программа для вычисления значения y = sin(x) - cos(x) на отрезке [A;B] в точках, заданных формулой x_i = A + i*H.\n\n";
    std:: cout << "Выполнил Смольский Александр, студент группы 453505.\n\n";

    while (true) {
        std:: cout << "Введите 1, чтобы ВЫПОЛНИТЬ программу, или введите 2, чтобы ЗАВЕРШИТЬ выполнение программы :";
        int num = readInt();
            if (num!=1 && num !=2) {
                std:: cout << "Некорректный формат ввода. Повторите попытку.\n\n";
                continue;
            }

            if (num == 2) {
                std:: cout << "Выполнение программы завершено.\n";
                break;
            }

        double A = 0, B = Pi / 2, M = 20, H = (B - A) / M;
        for (int i = 0; i <= M; i++) {
            double x = A + i * H;
            double y = Sin(x) - Cos(x);
            std::cout << "y(" << x << ") = " << y << "\n";
        }
        std::cout << "\n";
    }
    return 0;
}