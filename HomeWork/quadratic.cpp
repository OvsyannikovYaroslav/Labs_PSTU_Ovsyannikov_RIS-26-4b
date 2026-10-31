//решение квадратного уравнения

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;

    cout << "Enter a and b and c: ";
    cin >> a >> b >> c;

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                cout << "бесконечно" << endl;
            } else {
                cout << "нет решений" << endl;
            }
        } else {
            double x = -c / b;
            cout << "один линейный корень x = " << x << endl;
        }
    } else {
        double D = b * b - 4 * a * c;

        if (D < 0) {
            cout << "нет действительных корней" << endl;
        } else if (D == 0) {
            double x = -b / (2 * a);
            cout << "один корень: " << x << endl;
        } else {
            double x1 = (-b - sqrt(D)) / (2 * a);
            double x2 = (-b + sqrt(D)) / (2 * a);

            cout << "два корня: " << endl;
            cout << x1 << " " << x2 << endl;
        }
    }

    return 0;
}


// пример задачи с подставленными значениями


#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a = 1;
    double b = -5;
    double c = 6;

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                cout << "Infinite number of solutions" << endl;
            } else {
                cout << "No solutions" << endl;
            }
        } else {
            double x = -c / b;
            cout << "Linear root: x = " << x << endl;
        }
    } else {
        double D = b * b - 4 * a * c;
        cout << "D = " << D << endl;

        if (D < 0) {
            cout << "No real roots" << endl;
        } else if (D == 0) {
            double x = -b / (2 * a);
            cout << "x = " << x << endl;
        } else {
            double x1 = (-b - sqrt(D)) / (2 * a);
            double x2 = (-b + sqrt(D)) / (2 * a);
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2 << endl;
        }
    }

    return 0;
}

