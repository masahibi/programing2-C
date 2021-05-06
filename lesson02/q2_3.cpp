#include <string>
#include <iostream>
#include <sstream>
using namespace std;

class Account {
public:
    string name;
    string number;
    long balance;

    Account(string nm){
        name = nm;
        number = "00000000";
        balance = 0;
    }

    long getBalance(){
        return balance;
    }
    void deposit(long amount){
        balance += amount;
    }
    string toString(){
        stringstream ss;
        ss << "名前：" << name << ", 口座：" << number << ", 残高：" << balance << "円";
        return ss.str();
    }
    void print(){
        cout << toString() << endl;
    }
    Account(string nm, string num, long amount){
        name = nm;
        number = num;
        balance = amount;
    }
    Account(){
        name = "";
        number = "";
        balance = 0;
    }
};

int main(){
    Account suzuki = string("鈴木龍一");
    Account takeda = suzuki;
    suzuki.print();
    takeda.print();
    cout << "&suzuki.name = " << &suzuki.name <<", &suzuki.number = " << &suzuki.number << ", &suzuki.balance = " << &suzuki.balance << endl;
    cout << "&takeda.name = " << &takeda.name <<", &takeda.number = " << &takeda.number << ", &takeda.balance = " << &takeda.balance << endl;
}