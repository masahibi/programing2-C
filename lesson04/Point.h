#ifndef POINT_H_
#define POINT_H_

#include <string>

class Point {
private:
    double x;
    double y;

public:
    Point();
    Point(const Point& p);
    Point(double x, double y);
    Point& operator=(const Point& p);
    double getX();
    double getY();
    std::string toString();
};

#endif //C_C___POINT_H
