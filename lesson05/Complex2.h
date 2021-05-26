#ifndef COMPLEX2_H
#define COMPLEX2_H

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
    Complex operator+() const {return *this;}
    Complex operator-() const {return Complex(-re, -im);}

    Complex operator+(const Complex& arg) const;
    Complex operator-(const Complex& arg) const;
    Complex operator*(const Complex& arg) const;
    Complex operator/(const Complex& arg) const;
    Complex& operator+=(const Complex& arg);
    Complex& operator-=(const Complex& arg);
    Complex& operator*=(const Complex& arg);
    Complex& operator/=(const Complex& arg);
    bool operator==(const Complex& arg) const;
    bool operator!=(const Complex& arg) const;

    double real() {return re;}
    double imag() {return im;}
    double modulus() const;
    std::string str() const;
};


#endif //C_C___COMPLEX2_H
