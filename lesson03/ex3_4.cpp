#include <iostream>
#include "Counter2.h"
using namespace std;
int main(){
    int no;
    Counter x;
    Counter y;
    cout << "カウントアップ回数：" ; cin >> no;
    for (int i = 0; i < no; i++)
        cout << x++ << " " << ++y << endl;
    cout << "カウントダウン回数："; cin >> no;
    for(int i = 0; i < no; i++)
        cout << x-- << " " << --y << endl;
    if(!x)
        cout << "xは0です。\n";
    else
        cout << "xは0ではありません。\n";
 }