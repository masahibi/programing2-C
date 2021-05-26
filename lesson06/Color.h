#ifndef C_C___COLOR_H
#define C_C___COLOR_H

#include <sstream>
#include <string>

class Color {
    int red;
    int green;
    int blue;
public:
    Color(int r, int g, int b) : red(r), green(g), blue(b) {}
    inline int getRed() const {return red;}
    inline int getGreen() const {return green;}
    inline int getBlue() const {return blue;}
    std::string str() const {
        std::stringstream ss;
        ss << "Color[" << red << ", " << green << ", " << blue << "]";
        return ss.str();
    }
};

inline std::ostream &operator<<(std::ostream &s, const Color &color) {
    return s << color.str();
}

#endif //C_C___COLOR_H
