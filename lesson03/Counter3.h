#ifndef COUNTER3_H_
#define COUNTER3_H_

#include <climits>

class Counter3{
private:
    unsigned cnt;
public:
    Counter3();
    operator unsigned();
    bool operator!();
    Counter3& operator++();
    unsigned c();
    Counter3 operator++(int);
    Counter3& operator--();
    Counter3 operator--(int);
};

#endif /*COUNTER3_H*/
