#include "Date.h"
#include <string>
#include <sstream>
#include <iostream>

Date::Date() {
    std::cout << "Date：デフォルトコンストラクタ：" << this << std::endl;
    yy = 0; mm = 0; dd = 0;
}
Date::Date(int year, int month, int day){
    std::cout << "Date：引数付きコンストラクタ：" << this << std::endl;
    yy = year; mm = month; dd = day;
}
Date::Date(const Date& orig){
    std::cout << "Date：コピーコンストラクタ：" << &orig << " -> " << this << std::endl;
    yy = orig.yy; mm = orig.mm; dd = orig.dd;
}
Date& Date::operator=(const Date& d) {
    std::cout << "Date：代入演算子：" << &d << " -> " << this << std::endl;
    yy = d.yy; mm = d.mm; dd = d.dd;
    return *this;
}
std::string Date::toString(){
    std::stringstream ss;
    ss << yy << " / " << mm << " / " << dd;
    return ss.str();
}