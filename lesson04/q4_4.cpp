#include "Date1.h"
#include "Log.h"

#include <iostream>

int main(int argc, char *argv[]) {
    Date day(2021, 5, 4);
    Log maythe4th(day, "May the 4th be with you!");

    std::cout << maythe4th.str() << std::endl;
    Date::set_display_string();
    std::cout << maythe4th.str() << std::endl;
    std::cout << sizeof(day);
}