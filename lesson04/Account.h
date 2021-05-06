#ifndef ACCOUNT_H_
#define ACCOUNT_H_

#include "Date.h"
#include <string>
#include <iostream>

class Account{
private:
    std::string name;
    std::string number;
    long balance;
    Date date;

public:
    long getBalance() {return balance;}
    void deposit(long amount) {balance += amount;}
    std::string toString();
    void print() {std::cout << toString() << std::endl;}
    Account(const Account& orig);
    Account(std::string nm, std::string num, long amount, Date dt);
    Account();
};

#endif //C_C___ACCOUNT_H
