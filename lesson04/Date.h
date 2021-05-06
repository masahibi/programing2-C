#ifndef DATE_H_
#define DATE_H_

#include <string>

class Date{
private:
    int yy;
    int mm;
    int dd;

public:
    Date();
    Date(int year, int month, int day);
    Date(const Date& orig);
    Date& operator = (const Date& d);
    std::string toString();
};

#endif //C_C___DATE_H
