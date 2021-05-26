#include "Line.h"
#include "Point.h"
#include <string>
#include <iostream>
#include <sstream>
#include <cmath>

Line::Line(Point *pp) {
    p0 = pp[0];
    p1 = pp[1];
}
Line::Line(Point P0, Point P1) {
    p0 = P0;
    p1 = P1;
}
Line::Line(double x0, double y0, double x1, double y1) {
    p0 = Point(x0, y0);
    p1 = Point(x1, y1);
}
Line& Line::operator=(const Line& l){
    if (this != &l) {
        p0 = l.p0;
        p1 = l.p1;
    }
    return *this;
}
double Line::length(){
    double x = (p1.getX() - p0.getX());
    double y = (p1.getY() - p0.getY());
    return sqrt(x*x + y*y);
}
std::string Line::toString(){
    std::stringstream ss;
    ss << "(" << p0.getX() << "," << p0.getY() << ") - (" << p1.getX() << "," << p1.getY() << ")";
    return ss.str();
}