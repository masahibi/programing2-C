#include <iostream>
#include <string>
#include "Book.h"

using namespace std;

Book::Book(string t, string w, string c, int a, int p, string g, int num, bool s, string nm){
    title = t;
    writer = w;
    company = c;
    age = a;
    price = p;
    genre = g;
    number = num;
    state = s;
    name = nm;
}
void Book::ChangeBorrower(string nm){
    name = nm;
}
void Book::ChangeState(bool st){
    if (st == true){
        state = false;
    } else{
        state = true;
    }
}