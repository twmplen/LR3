#include <iostream>
#include <cmath>  
#include <vector>  

using namespace std;

int factorial(int n) {
    int result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

double calculateSeries(double x, int n) {
    double sum = 0.0;
    for (int i = 0; i < n; ++i) {
        int exponent = 2 * i + 1;
        double term = pow(-1, i) * pow(x, exponent) / factorial(exponent);
        sum += term;
    }
    return sum;
}

int main() {
    int n; 
    int numX; 

    cout << "Введите количество членов ряда (n): ";
    cin >> n;

    cout << "Введите количество значений x, которые вы хотите вычислить: ";
    cin >> numX;

    vector<double> xValues(numX);

    cout << "Введите каждое значение x (от 0.1 до 1.0):\n";
    for (int i = 0; i < numX; ++i) {
        cout << "x[" << i+1 << "]: ";
        cin >> xValues[i];
    }

    cout << "\nРезультаты:\n";
    cout << "x\tS(x)\t\tY(x)\n";
    for (double x : xValues) {
        double seriesResult = calculateSeries(x, n);
        double exactResult = sin(x);
        cout << x << "\t" << seriesResult << "\t" << exactResult << "\n";
    }

    return 0;
}