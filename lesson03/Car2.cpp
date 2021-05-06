#include <cmath>
#include <string>
#include <iostream>
#include "Car2.h"

using namespace std;

Car2::Car2(string n, int w, int l, int h, double f){
    name = n;
    width = w;
    length = l;
    height = h;
    fuel_level = f;
    xp = 0;
    xp = 0;
}
void Car2::print_spec() {
    cout << "名前：" << name << endl;
    cout << "車幅；" << width << "mm\n";
    cout << "車長：" << length << "mm\n";
    cout << "車高：" << height << "mm\n";
}
bool Car2::move(double dx, double dy){
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
void Car2::addfuel(double add){
    fuel_level += add;
}