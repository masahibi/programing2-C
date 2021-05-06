#include <iostream>
using namespace std;

class IntArray{
public:
    int size;
    int *data;
    IntArray(int sz){
        size = sz;
        data = new int[sz];
        cout << "引数付きコンストラクタ" << endl;
    }
    IntArray(const IntArray& orig){
        size = orig.size;
        data = new int[size];
        for (int i = 0; i < size; i++){
            data[i] = orig.data[i];
        }
        cout << "コピーコンストラクタ" << endl;
    }
    ~IntArray(){
        delete[] data;
    }
};

int main(){
    IntArray a = IntArray(3);
    IntArray b = a;
    IntArray c = 3;

}