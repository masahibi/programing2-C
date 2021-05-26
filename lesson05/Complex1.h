#ifndef COMPLEX1_H
#define COMPLEX1_H

#include <iostream>
#include <string>

class Complex {
private:
    double re;
    double im;

public:
    Complex(double real = 0, double imag = 0);
    Complex(const Complex& orig);

    Complex& operator=(const Complex& arg);
    Complex operator+() {return *this;}
    Complex operator-() {return Complex(-re, -im);}

    Complex operator+(const Complex& arg);
    Complex operator-(const Complex& arg);
    Complex operator*(const Complex& arg);
    Complex operator/(const Complex& arg);
    Complex& operator+=(const Complex& arg);
    Complex& operator-=(const Complex& arg);
    Complex& operator*=(const Complex& arg);
    Complex& operator/=(const Complex& arg);
    bool operator==(const Complex& arg);
    bool operator!=(const Complex& arg);

    double real() {return re;}
    double imag() {return im;}
    double modulus();
    std::string str();
};


#endif //C_C___COMPLEX1_H
