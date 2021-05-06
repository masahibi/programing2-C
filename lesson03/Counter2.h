#ifndef COUNTER2_H_
#define COUNTER2_H_

#include <climits>

class Counter{
private:
    unsigned cnt;
public:
    Counter(){cnt = 0;}
    operator unsigned(){return cnt;}
    bool operator!(){return cnt == 0;}
    Counter& operator++(){
        if(cnt < UINT_MAX) cnt++;
        return *this;
    }
    Counter operator++(int){
        Counter x = *this;
        if(cnt < UINT_MAX) cnt++;
        return x;
    }
    Counter& operator--(){
        if(cnt > 0) cnt--;
        return *this;
    }
    Counter operator--(int){
        Counter x = *this;
        if(cnt > 0) cnt--;
        return x;
    }
};

#endif /*COUNTER2_H*/
