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

    std:: cout << "Программа, вычисляющая сумму всех N=(a_i - b_i)^2 от i=1 до i=30 с помощью цикла while, где a и b определяются разными формулами в зависимости от четности/нечетности i.\n\n";
    std:: cout << "Выполнил Смольский Александр, студент группы 453505\n\n";

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
            
    int i=1;
    double a, b, N;
    N=0;
        while (i<=30) {
            if (i%2==0) {
                a=i/2;
                b=i*i*i;
            }
            else if (i%2==1) {
                a=i;
                b=i*i;
            }
            
            N += (a-b)*(a-b);
            i++;
        }
    std:: cout << "N=" << N << "\n\n";
    }
    return 0;
}