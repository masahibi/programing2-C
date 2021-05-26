#ifndef C_C___CIRCLE0_H
#define C_C___CIRCLE0_H

#include "../canvas/canvas.h"
#include "Point.h"
#include <sstream>
#include <string>

class Circle {
protected:
    Point center;  // -------------------これ何？？
    int radius;
public:
    Circle(int x, int y, int r) : center(Point(x, y), radius(r)) { ; }  //--------------radius > r 大丈夫？
    inline int getX() const {return center.getX();}
    inline int getY() const {return center.getY();}
    inline int getR() const {return radius;}
    inline void setX(int x) {center.setX(x);}
    inline void setY(int y) {center.setY(y);}
    inline void setR(int r) {radius = r;}
    void draw() const {
        canvas::setColor(0, 0, 0);
        canvas::drawRectangle(center.getX(), center.getY(), radius);
    }
    std::string str() const {
        std::stringstream ss;
        ss << "Circle[center = " << center << ", radius = " << radius << "]";
        return ss.str();
    }
};

#endif //C_C___CIRCLE0_H
