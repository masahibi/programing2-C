#include <iostream>
#include "Counter.h"
using namespace std;

int main(){
    int no;
    Counter x;
    cout << "現在のカウンタ：" << x.value() << endl;
    cout << "カウントアップ回数：";
    cin >> no;
    for(int i = 0; i < no; i++){
        x.increment();
        cout << x.value() << endl;
    }
    cout << "カウントダウン回数：";
    cin >> no;
    for(int i = 0; i < no; i++){
        x.decrement();
        cout << x.value() << endl;
    }
}