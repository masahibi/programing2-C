#include <iostream>
#include "DoubleArray.h"

using namespace std;

int main(){
    DoubleArray d1;
    for (int i = 0; i < 20; i++){
        d1.add(i);
    }
    d1.print();
    d1.remove(3);
    d1.print();
    d1.insert(5, 100);
    d1.print();
    d1.remove();
    d1.print();
    d1.remove(30);
    d1.print();
}