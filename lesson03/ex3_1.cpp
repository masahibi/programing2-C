#include <iostream>
#include <sstream>
using namespace std;

class Account {
private:
    string name;
    string number;
    long balance;
public:
    long getBalance(){
        return balance;
    }
    void deposit(long amount){
        balance += amount;
    }
    string toString(){
        stringstream ss;
        ss << "名前: " << name << ", 口座: " << number << ", 残高: " << balance << "円";
        return ss.str();
    }
    void print(){
        cout << toString() << endl;
    }
    Account(string nm, string num = "00000000", long amount = 0){
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
    Account suzuki("鈴木龍一", "12345678", 1000);
    Account takeda = suzuki;
    suzuki.print();
    takeda.print();
}