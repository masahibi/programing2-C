#include "../canvas/canvas.h"
#include "ColoredCircle0.h"
#include "Circle0.h"
#include <iostream>

using namespace std;

int main() {
    canvas::show();
    Circle circle(100, 100, 50);
    circle.draw();
    ColoredCircle ccircle(200, 200, 50, 255, 0, 0);
    ccircle.draw();
    canvas::waitForKey();
}