#include "Complex2.h"
#include <iostream>

using namespace std;

int main(){
    double re, im;
    cout << "a の実部："; cin >> re;
    cout << "a の虚部："; cin >> im;
    const Complex a(re, im);

    cout << "b の実部："; cin >> re;
    cout << "b の虚部："; cin >> im;
    const Complex b(re, im);

    if (a == b) {
        cout << "a と b は等しい複素数です" << endl;
    } else {
        cout << "a と b は等しくありません" << endl;
    }

    Complex c = -a + b;
    cout << "-a + b = " << c.str() << endl;
    c += b;
    c -= Complex(1.0, 1.0);
    cout << "-a + b + b - (1 + i) = " << c.str() << endl;

    Complex d = a * b;
    cout << "a * b = " << d.str() << endl;
}