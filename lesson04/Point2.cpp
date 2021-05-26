#include "Point2.h"
#include <string>
#include <iostream>
#include <sstream>

Point::Point() {
    x = 0;
    y = 0;
    id = counter++;
    std::cout << "デフォ" << std::endl;
}
Point::Point(const Point& p) {
    x = p.x;
    y = p.y;
    id = counter++;
    std::cout << "コピー" << std::endl;
}
Point::Point(double xx, double yy) {
    x = xx;
    y = yy;
    id = counter++;
    std::cout << "引数" << std::endl;
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
//int Point::getId() {
//    return id;
//}
std::string Point::toString() {
    std::stringstream ss;
    ss << "(" << x << "," << y << ")";
    return ss.str();
}