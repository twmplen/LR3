#include <iostream>

long long readLong() {
    long long input;
    if (!(std::cin >> input)) {
        std::cin.clear();
        while (std::cin.get() != '\n');  
        return 0;  
    }
    return input;
}

int main() {
    std::cout << "Программа, вычисляющая a - 2a + 4a - 8a + ... + 2^(n - 1) * (-1)^(n - 1) * a\n\n";
    std::cout << "Выполнил Смольский Александр, студент группы 453505.\n\n";

    while (true) {
        std::cout << "Введите 1, чтобы выполнить программу, или введите 2, чтобы закончить работу программы: ";
        int type = readLong();
        if (type != 1 && type != 2) {
            std::cout << "Неправильный формат ввода.\n\n";
            continue;
        }
        if (type == 2) {
            std::cout << "Выполнение программы завершено.\n";
            break;
        }

        std::cout << "Введите число n: ";
        long long n = readLong();
        while (n < 1) {
            std::cout << "Заново введите число n (n > 0): ";
            n = readLong();
        }

        std::cout << "Введите число a: ";
        long long a = readLong();
        while (a < 1) {
            std::cout << "Заново введите число a (a > 0): ";
            a = readLong();
        }

        long long sum = 0;  
        long long first = a; 

        for (long long i = 0; i < n; i++) {
            if (i % 2 == 0) {  
                sum += first;
            } else {  
                sum -= first;
            }
            first *= 2;  
        }

        std::cout << "Ответ: " << sum << "\n\n";
    }

    return 0;
}