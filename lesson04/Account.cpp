#include "Account.h"
#include "Date.h"
#include <string>
#include <iostream>
#include <sstream>

std::string Account::toString(){
    std::stringstream ss;
    ss << "名前：" << name << "、口座：" << number << "、残高：" << balance << "円、登録（ " << date.toString() << "、" << &date << " ）";
    return ss.str();
}
Account::Account(const Account& orig) {
    std::cout << "Account：コピーコンストラクタ：" << &orig << " -> " << this << std::endl;  // ここ注意！
    name = orig.name; number = orig.number; balance = orig.balance; date = orig.date;
}
Account::Account(std::string nm, std::string num, long amount, Date dt) {
    std::cout << "Account：引数付きコンストラクタ：" << this << std::endl;
    name = nm; number = num; balance = amount; date = dt;
}
Account::Account() {
    std::cout << "Account：デフォルトコンストラクタ：" << this << std::endl;
    name = ""; number = ""; balance = 0; date = Date(0,0,0);
}