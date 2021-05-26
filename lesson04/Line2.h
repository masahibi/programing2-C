#ifndef LINE2_H_
#define LINE2_H_

#include <string>
#include "Point2.h"

class Line {
private:
    Point p0;
    Point p1;
public:
    Line(Point *pp);
    Line(const Point& p0, const Point& p1);
    Line(double x0, double y0, double x1, double y1);
    Line& operator=(const Line& l);
    double length();
    std::string toString();
};

#endif //C_C___LINE2_H
