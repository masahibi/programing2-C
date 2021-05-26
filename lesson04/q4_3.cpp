#include "Line2.h"
#include <iostream>

using namespace std;

int Point::counter = 0;

int main(){
    cout << Point::counter << endl;  // 0
    Point p0(1, 2);  // 1 引数
    Point p1(3, 1);  // 2　引数
    cout << Point::counter << endl;  // 2
    Line l1(p0, p1);
    cout << Point::counter << endl;  //6
    cout << l1.toString() << ", 長さ：" << l1.length() << endl;
    Line l2(1, 2, 3, 4);
    cout << Point::counter << endl;  // 10
    cout << l2.toString() << ", 長さ：" << l2.length() << endl;
    Point p3 = p1;
    Point p4;
    p4 = p0;
    cout << Point::counter << endl;  // 12
    Line l3(p3, p4);
    cout << Point::counter << endl;  // 16
    cout << l3.toString() << ", 長さ：" << l3.length() << endl;
    cout << Point::counter << endl;  // 16
}