#include <iostream>
#include <cmath>

using namespace std;

bool isArmstrong(int num){

    int sum = 0;
    int originalNum = num;
    int digits = 0;

    while (originalNum != 0) {
        originalNum /= 10;
        digits++;
    }

    originalNum = num;

    while (originalNum != 0) {
        int digit = originalNum % 10;
        sum += pow(digit, digits);
        originalNum /= 10;
    }

    return sum == num;
}

int main(){

    while (true)
    {
        int limit;
        cout << "Напишите предел поиска чисел Армстронга: ";
        cin >> limit;


        cout << "Числа Армстронга меньше " << limit << ":\n";
        for (int i = 0; i < limit; i++) {
            if (isArmstrong(i)) {
                cout << i << "\n";
            }
        }
    }
    



    return 0;
}