#include <iostream>
using namespace std;

//Задача №2
int main() {
    int a = 12;
    int* ptr = &a;
    int copy = *ptr;

    (*ptr)++;

    cout << a << " " << copy;

    return 0;
}
