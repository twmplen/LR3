#include <iostream>

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

    std:: cout << "Программа для нахождения суммы ряда, общий член которого d = (1/2)^n + (1/3)^n, с точностью E = 10^(-3) при помощи цикла do while.\n(Считается, что точность достигнута, если d_n < E.)\n\n";
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
        double e = 1e-3, d = 0, sum = 0;
        double first = 1, second = 1;

            do { 
                first /= 2;
                second /= 3;
                d = first + second;
                sum += d;
            } while (d >= e);
        std:: cout << "Сумма ряда равна " << sum << "\n\n";
    }

    return 0;
}