#include <iostream>
using namespace std;

class DoubleArray{
public:
    int size;
    double *data;
    int pos;

    DoubleArray(int sz){
        size =sz;
        pos = 0;
        data = new double[size];
    }
    DoubleArray(){
        size = 8;
        pos = 0;
        data = new double[size];
    }
    DoubleArray(const DoubleArray& orig){
        size = orig.size;
        pos = orig.pos;
        data = new double[size];
        for (int i = 0; i < size; i++){
            data[i] = orig.data[i];
        }
    }
    void add (double d){
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
    void print(){
        for (int i = 0; i < pos; i++){
            cout << data[i] << ", ";
        }
        cout << endl;
        // cout << pos;
    }
    ~DoubleArray(){
        delete[] data;
    }
};

int main(){
    DoubleArray d1;
    cout << d1.size << "," << d1.pos << endl;
    for (int i = 0; i < 20; i++){
        d1.add(i);
    }
    cout << d1.size << "," << d1.pos << endl;
    DoubleArray d2 = d1;
    d2.add(100.0);
    cout << d2.size << "," << d2.pos << endl;
    d1.print();
    d2.print();

}