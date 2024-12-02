#include <iostream>
#include <cmath>

using namespace std;

double f(double x) {
    return sin(x) + cos(x) - 2 * atan(x);
}

int main() {
    int num_intervals;
    cout << "Введите количество интервалов для деления [0, 1]: ";
    cin >> num_intervals;

    double step = 1.0 / num_intervals;
    double x_min = 0;
    double min_value = 1e9;

    for (double x = 0; x <= 1; x += step) {
        double fx = f(x) ;

        if (fabs(fx) < min_value) {
            min_value = fabs(fx);
            x_min = x;
        }
    }

    cout << "Приближенный корень находится в точке х = " << x_min << " c f(x) = " << f(x_min) << endl;

    return 0;
}