#ifndef POINT2_H_
#define POINT2_H_

#include <string>

class Point {
private:
    double x;
    double y;
    int id;

public:
    static int counter;

    Point();
    Point(const Point& p);
    Point(double x, double y);
    Point& operator=(const Point& p);
    double getX();
    double getY();
//    int getId();
    std::string toString();
};

#endif //C_C___POINT2_H
