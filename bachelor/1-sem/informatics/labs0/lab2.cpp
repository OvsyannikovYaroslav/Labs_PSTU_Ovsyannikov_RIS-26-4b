 //Задание 1

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    const double e = 0.0001;

    int n = 1;
    double a = 0.5;
    double sum = 0;

    while (a >= e) {
        sum = sum + a;

        a = a * (n + 1) * (n + 1) / pow(2, 2 * n + 1);
        n = n + 1;
    }

    cout << fixed << setprecision(10);
    cout << "сумма = " << sum << endl;
    cout << "кол-во терминов= " << n - 1 << endl;

    return 0;
}




 












