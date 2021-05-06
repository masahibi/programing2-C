#include <iostream>
#include <climits>
#include "Counter3.h"

using namespace std;

Counter3::Counter3() {
    cnt = 0;
}
Counter3::operator unsigned(){
    return cnt;
}
bool Counter3::operator!(){
    return cnt == 0;
}
Counter3& Counter3::operator++(){  // ++X
    if(cnt < UINT_MAX) cnt++;
    return *this;
}
unsigned Counter3::c(){
    return cnt;
}
Counter3 Counter3::operator++(int){  // X++
    Counter3 x = *this;
    operator++();
    return x;
}
Counter3& Counter3::operator--(){  // --X
    if(cnt > 0) cnt--;
    return *this;
}
Counter3 Counter3::operator--(int){  // X--
    Counter3 x = *this;
    operator--();
    return x;
}