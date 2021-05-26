#ifndef C_C___COLOREDCIRCLE0_H
#define C_C___COLOREDCIRCLE0_H

#include "Color.h"
#include "Circle0.h"

class ColoredCircle : public Circle {
    Color color;
public:
    ColoredCircle(int x, int y, int rad, int r, int g, int b)
        : Circle(x, y, rad), color(Color(r, g, b)) {}
    Color getColor() const {return color;}
    void setColor(const Color &col) {color = col;}
    void setColor(int r, int g, int b) {
        color = Color(r, g, b);
    }
    void draw() const {
        canvas::setColor(color.getRed(), color.getGreen(), color.getBlue());
        canvas::drawCircle(center.getX(), center.getY(), radius);
    }
    std::string str() const {
        std::stringstream ss;
        ss << "ColoredCircle[center = " << center << ", radius = " << radius << "]";
        return ss.str();
    }
};

#endif //C_C___COLOREDCIRCLE0_H
