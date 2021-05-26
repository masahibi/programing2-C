#ifndef LINE_H_
#define LINE_H_

#include <string>
#include "Point.h"

class Line {
private:
    Point p0;
    Point p1;
public:
    Line(Point *pp);
    Line(Point p0, Point p1);
    Line(double x0, double y0, double x1, double y1);
    Line& operator=(const Line& l);
    double length();
    std::string toString();
};

#endif //C_C___LINE_H
