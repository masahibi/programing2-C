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
    void remove(int idx){
        for (int i = idx; i < pos; i++){
            data[i] = data[i + 1];
        }
        if (idx <=pos)  pos = pos - 1;
    }
    void remove(){
        pos = pos - 1;
    }
    void insert(int idx, double d){
        size++;
        pos++;
        for (int i = pos; i > idx; i--){
            data[i] = data[i - 1];
        }
        data[idx] = d;
    }
    ~DoubleArray(){
        delete[] data;
    }
};

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