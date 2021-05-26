#include "Complex1.h"
#include <iostream>
#include <sstream>
#include <string>
#include <cmath>

Complex::Complex(double real, double imag) {
    re = real;
    im = imag;
}
Complex::Complex(const Complex& orig) {
    re = orig.re;
    im = orig.im;
}
Complex& Complex::operator=(const Complex& arg) {
    if (this != &arg) {
        re = arg.re;
        im = arg.im;
    }
    return *this;
}
Complex Complex::operator+(const Complex& arg) {
    Complex temp(*this);
    return temp += arg;
}
Complex Complex::operator-(const Complex& arg) {
    Complex temp(*this);
    return temp -= arg;
}
Complex Complex::operator*(const Complex &arg) {
    Complex temp(*this);
    return temp *= arg;
}
Complex Complex::operator/(const Complex &arg) {
    Complex temp(*this);
    return temp /= arg;
}
Complex& Complex::operator+=(const Complex &arg) {
    re += arg.re;
    im += arg.im;
    return *this;
}
Complex& Complex::operator-=(const Complex &arg) {
    re -= arg.re;
    im -= arg.im;
    return *this;
}
Complex& Complex::operator*=(const Complex &arg) {
    double re1 = (re * arg.re) - (im * arg.im);  // 注意！　　re = (re * arg.re) - (im * arg.im);　こうやってたせいで詰まってた
    double im1 = (re * arg.im) + (im * arg.re);  // こっちの re が変わっちゃうからダメ！
    re = re1;
    im = im1;
    return *this;
}
Complex& Complex::operator/=(const Complex &arg) {
    double re1 = ((re * arg.re) + (im * arg.im)) / (arg.re * arg.re) + (arg.im * arg.im);
    double im1 = ((im * arg.re) - (re * arg.im)) / (arg.re * arg.re) + (arg.im * arg.im);
    re = re1;
    im = im1;
    return *this;
}
bool Complex::operator==(const Complex &arg) {
    return re == arg.re && im == arg.im;
}
bool Complex::operator!=(const Complex &arg) {
    return !(*this == arg);
}
double Complex::modulus() {
    return sqrt((re * re) + (im * im));
}
std::string Complex::str() {
    std::stringstream ss;
    if (im > 0) {ss << re << " + " << im << "i";}
    else if (im == 0) {ss << re;}
    else {ss << re << im << "i";}
    return ss.str();
}
