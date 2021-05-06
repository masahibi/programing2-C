#include <iostream>
#include <sstream>
#include <cmath>
using namespace std;

class Complex{
public:
    double real;
    double imag;

    Complex(double re, double im){
        real = re;
        imag = im;
    }

    double getReal(){
        return real;
    }
    double getImag(){
        return imag;
    }
    double getModulus(){
        return sqrt(getReal() * getReal() + getImag() * getImag());
    }
    void add(double r, double i){
        real += r;
        imag += i;
    }
    void mult(double r, double i){
        double real0 = getReal();
        real = getReal() * r - getImag() * i;
        imag = real0 * i + getImag() * r;
    }
    string toString(){  // 後で確認
        stringstream ss;
        if (imag == 0) ss << getReal();
        else if (imag == 1) ss << getReal() << "+i";
        else if (imag == -1) ss << getReal() << "-i";
        else if (imag > 0) ss << getReal() << "+" << getImag() << "i";
        else ss << real << imag << "i";
        string s = ss.str();
        return s;
    }
    void print(){
        cout << toString() << endl;
    }

};

int main(){
    Complex comp(3, 4);

//    comp.print();
    cout << "絶対値：" << comp.getModulus() << endl;

    comp.add(2, -5);
    cout << "加算した結果：";
    comp.print();

    comp.mult(6, -2);
    cout << "乗算した結果：";
    comp.print();

}