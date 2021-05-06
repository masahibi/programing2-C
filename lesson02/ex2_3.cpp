#include <iostream>
using namespace std;

class IntArray{
public:
    int size;
    int *data;
    IntArray(int sz){
        size = sz;
        data = new int[sz];
    }
};

int main(){
    IntArray a(3);
    a.data[0] = 1;
    a.data[1] = 2;
    a.data[2] = 3;
    IntArray b = a;
    b.data[0] = 4;
    cout << a.data[0] << a.data[1] << a.data[2] << endl;
    cout << b.data[0] << b.data[1] << b.data[2] << endl;
    cout << &a.size << &a.data << endl;
    cout << &a.data[0] << &a.data[1] << &a.data[2] << endl;
    cout << &b.size << &b.data << endl;
    cout << &b.data[0] << &b.data[1] << &b.data[2] << endl;

}