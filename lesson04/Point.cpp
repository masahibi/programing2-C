#include "Point.h"
#include <string>
#include <iostream>
#include <sstream>

Point::Point() {
    x = 0;
    y = 0;
}
Point::Point(const Point& p) {
    x = p.x;
    y = p.y;
}
Point::Point(double xx, double yy) {
    x = xx;
    y = yy;
}
Point& Point::operator=(const Point& p) {
    if (this != &p){
        x = p.x;
        y = p.y;
    }
    return *this;
}
double Point::getX() {
    return x;
}
double Point::getY() {
    return y;
}
std::string Point::toString() {
    std::stringstream ss;
    ss << "(" << x << "," << y << ")";
    return ss.str();
}