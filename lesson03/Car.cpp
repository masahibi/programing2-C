#include <cmath>
#include <string>
#include <iostream>
#include "Car.h"

using namespace std;

Car::Car(string n, int w, int l, int h, double f){
    name = n;
    width = w;
    length = l;
    height = h;
    fuel_level = f;
    xp = 0;
    xp = 0;
}
void Car::print_spec() {
    cout << "名前：" << name << endl;
    cout << "車幅；" << width << "mm\n";
    cout << "車長：" << length << "mm\n";
    cout << "車高：" << height << "mm\n";
}
bool Car::move(double dx, double dy){
    double dist = sqrt(dx * dx + dy * dy);
    if (dist > fuel_level){
        return false;
    }else{
        fuel_level -= dist;
        xp += dx;
        yp += dy;
        return true;
    }
}