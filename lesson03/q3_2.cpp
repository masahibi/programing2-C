#include <string>
#include <iostream>
#include <cmath>
#include "Car2.h"

using namespace std;

int main(){
    string name;
    int width, length, height;
    double gas;
    cout << "車のデータを入力せよ。\n";
    cout << "名前は；"; cin >> name;
    cout << "車幅は；"; cin >> width;
    cout << "車長は；"; cin >> length;
    cout << "車高は；"; cin >> height;
    cout << "ガソリン量は；"; cin >> gas;
    Car2 myCar(name, width, length, height, gas);
    myCar.print_spec();

    while(true){
        cout << "現在地（" << myCar.x() << "," << myCar.y() << "）\n";
        cout << "残り燃料：" << myCar.fuel() << "\n";
        cout << "移動[0–-No/1—-Yes]：";
        int move;
        cin >> move;
        if(move == 0) break;
        double dx, dy;
        cout << "x方向の移動距離："; cin >> dx;
        cout << "y方向の移動距離："; cin >> dy;
        double value;
        value = sqrt(dx*dx+dy*dy);
        if (!myCar.move(dx, dy)) {
            cout << "燃料が" << value - myCar.fuel() << "足りません！いくら追加しますか？\n";
            double add;
            cin >> add;
            myCar.addfuel(add);
        }
    }
}