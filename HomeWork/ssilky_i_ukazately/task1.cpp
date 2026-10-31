#include <iostream>
using namespace std;

//Задача №1
int main() {
    int a = 10;
    int b = 20;
    int& r = a;

    r = b;
    r++;

    cout << a << " " << b;

    return 0;
}
