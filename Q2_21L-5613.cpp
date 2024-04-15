#include <iostream>
using namespace std;

void printcomma(int n) {
    if (n < 0) {
        cout << "-";
        printcomma(-n);
        return;
    }
    if (n < 1000) {
        cout << n;
        return;
    }
    printcomma(n / 1000);
    cout << "," << n % 1000;
}
int main(void) {
    int x[] = { 876543345 };
    int* p = x;
    cout << endl;
    cout << "Number : ";
    while (p != &(x[sizeof(x) / sizeof(*x)])) {
        cout << *p;
        p++;
    }
    cout << endl;
    cout << endl << "Number with Commas : ";
    int* y = x;
    while (y != &(x[sizeof(x) / sizeof(*x)])) {
        printcomma(*y);
        y++;
    }
    cout << endl << endl;
    return 0;
}