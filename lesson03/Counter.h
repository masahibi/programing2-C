#ifndef COUNTER_H_
#define COUNTER_H_

#include <climits>

class Counter{
private:
    unsigned cnt;
public:
    Counter(){cnt = 0;}
    void increment(){
        if (cnt < UINT_MAX) cnt++;
    }
    void decrement(){
        if (cnt > 0) cnt--;
    }
    unsigned value(){
        return cnt;
    }
};

#endif /*COUNTER_H*/
