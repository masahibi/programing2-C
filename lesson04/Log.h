#ifndef LOG_H_
#define LOG_H_

#include "Date1.h"
#include <string>

class Log {
private:
    Date when;
    std::string contents;

public:
    Log();
    Log(Date, std::string);
    Log(const Log&);
    std::string str();
};

#endif //C_C___LOG_H
