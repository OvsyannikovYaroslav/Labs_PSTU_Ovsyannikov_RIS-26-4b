//Задание 1 

#include <iostream>
using namespace std;

int main() {
    const int max = 100;
    int a[max];
    int n, k;

    cout << "Number of elements (4..100): ";
    cin >> n;
    if (n < 4 || n > max) {
        cout << "Invalid number of elements" << endl;
        return 1;
    }

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "K (2.." << n - 1 << "): ";
    cin >> k;
    if (k < 2 || k > n - 1) {
        cout << "Invalid K" << endl;
        return 1;
    }
    cout << "Circle to the left from K: ";
    for (int t = 0; t < n; t++) {
        int index = (k - 1 - t + n) % n;
        cout << a[index] << " ";
    }
    cout << endl;
    for (int i = 0; i < n - 1; i++) {
        a[i] = a[i + 1];
    }
    n = n - 2;
    cout << "Circle to the right after deletion: ";
    for (int t = 0; t < n; t++) {
        int index = (k - 2 + t) % n;
        cout << a[index] << " ";
    }
    cout << endl;

    return 0;
}
