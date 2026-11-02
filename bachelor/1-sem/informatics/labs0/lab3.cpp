//Задание 1

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    const double a = 0.1;
    const double b = 1.0;
    const int k = 10;
    const int n = 30;
    const double e = 0.0001;
    const double h = (b - a) / k;

    cout << fixed << setprecision(10);
    cout << "X\t\tSN\t\tSE\t\tY" << endl;

    for (int i = 0; i <= k; i++) {
        double x = a + i * h;

        double sn = 0;
        double term = x * x * x / 3.0;
        for (int j = 1; j <= n; j++) {
            sn = sn + term;
            term = -term * x * x * (4.0 * j * j - 1)
                        / (4.0 * (j + 1) * (j + 1) - 1);
        }

        double se = 0;
        term = x * x * x / 3.0;
        int j = 1;
        while (fabs(term) >= e) {
            se = se + term;
            term = -term * x * x * (4.0 * j * j - 1)
                        / (4.0 * (j + 1) * (j + 1) - 1);
            j = j + 1;
        }

        double y = (1 + x * x) * atan(x) / 2.0 - x / 2.0;

        cout << x << "\t" << sn << "\t" << se << "\t" << y << endl;
    }

    return 0;
}

