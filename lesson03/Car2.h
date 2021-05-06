#ifndef CAR_H_
#define CAR_H_

#include <string>

class Car2{
    std::string name;
    int width, length, height;
    double xp, yp;
    double fuel_level;

public:
    Car2(std::string n, int w, int l, int h, double f);
    double x(){return xp;}
    double y(){return yp;}
    double fuel(){return fuel_level;}
    void print_spec();
    bool move(double dx, double dy);
    void addfuel(double add);
};

#endif /*CAR_H_*/
