#ifndef CAR_H_
#define CAR_H_

#include <string>

class Car{
    std::string name;
    int width, length, height;
    double xp, yp;
    double fuel_level;

public:
    Car(std::string n, int w, int l, int h, double f);
    double x(){return xp;}
    double y(){return yp;}
    double fuel(){return fuel_level;}
    void print_spec();
    bool move(double dx, double dy);
};

#endif /*CAR_H_*/
