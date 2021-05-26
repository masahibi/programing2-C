#include <iostream>
#include "VipMember.h"

using namespace std;

int main(){
    Member kaneko("金子", 15, 75.2);
    VipMember mineya("峰山", 17, 89.2, "会費全額免除");

    double weight = kaneko.getWeight();
    kaneko.setWeight(weight - 3.7);
    cout << "No." << kaneko.no() << " : " << kaneko.name() << " ( " << kaneko.getWeight() << "kg) \n";

    weight = mineya.getWeight();
    mineya.setWeight(weight - 15.3);
    cout << "No." << mineya.no() << " : " << mineya.name() << " ( " << mineya.getWeight() << "kg) " << "特典＝" << mineya.getPrivilege() << endl;
}