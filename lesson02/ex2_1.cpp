#include <string>
#include <iostream>
#include <sstream>
using namespace std;

class Account {
public:
    string name;
    string number;
    long balance;

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
    Account persons[2];
    persons[0].name = "鈴木龍一";
    persons[0].number = "12345678";
    persons[0].balance = 1000;
    persons[1].name = "武田";
    persons[1].number = "87654321";
    persons[1].balance = 200;
    persons[0].deposit(-500);
    persons[1].deposit(500);
    for (int i = 0; i < 2; i++){
        persons[i].print();
    }
}