#include <iostream>
#include "DoubleArray.h"

using namespace std;

DoubleArray::DoubleArray(int sz){
    size =sz;
    pos = 0;
    data = new double[size];
}
DoubleArray::DoubleArray(){
    size = 8;
    pos = 0;
    data = new double[size];
}
DoubleArray::DoubleArray(const DoubleArray& orig){
    size = orig.size;
    pos = orig.pos;
    data = new double[size];
    for (int i = 0; i < size; i++){
        data[i] = orig.data[i];
    }
}

void DoubleArray::add(double d){
    if (pos >= size){
        size = size * 2;
        double *data2;
        data2 = new double[size];
        for (int i = 0; i < size; i++){
            data2[i] = data[i];
        }
        delete[] data;
        data = data2;
    }
    data[pos] = d;
    pos++;
}
void DoubleArray::print(){
    for (int i = 0; i < pos; i++){
        cout << data[i] << ", ";
    }
    cout << endl;
    // cout << pos;
}
void DoubleArray::remove(int idx){
    for (int i = idx; i < pos; i++){
        data[i] = data[i + 1];
    }
    if (idx <=pos)  pos = pos - 1;
}
void DoubleArray::remove(){
    pos = pos - 1;
}
void DoubleArray::insert(int idx, double d){
    size++;
    pos++;
    for (int i = pos; i > idx; i--){
        data[i] = data[i - 1];
    }
    data[idx] = d;
}
DoubleArray::~DoubleArray(){
    delete[] data;
}