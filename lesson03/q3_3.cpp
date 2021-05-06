#include <iostream>
#include <string>
#include "Book.h"

using namespace std;

int main(){
    string title, writer, company, genre, name;
    int age, price, number;
    bool state = true;
    cout << "タイトル："; cin >> title;
    cout << "著者："; cin >> writer;
    cout << "出版社："; cin >> company;
    cout << "出版年："; cin >> age;
    cout << "値段："; cin >> price;
    cout << "分野："; cin >> genre;
    cout << "図書館番号："; cin >> number;

    cout << "名前："; cin >> name;
    cout << endl << endl;

    Book book(title, writer, company, age, price, genre, number, state, name);
    cout << "タイトル：" << book.ti() << endl
         << "著者：" << book.wr() << endl
         << "出版社：" << book.co() << endl
         << "出版年：" << book.ag() << endl
         << "値段：" << book.pr() << endl
         << "分野：" << book.ge() << endl
         << "図書館番号：" << book.nu() << endl
         << "状態：" << book.st() << endl
         << "名前：" << book.na() << endl;
    cout << "----------------------------------" << endl;

    book.ChangeBorrower("中田健司");
    book.ChangeState(book.st());

    cout << "タイトル：" << book.ti() << endl
         << "著者：" << book.wr() << endl
         << "出版社：" << book.co() << endl
         << "出版年：" << book.ag() << endl
         << "値段：" << book.pr() << endl
         << "分野：" << book.ge() << endl
         << "図書館番号：" << book.nu() << endl
         << "状態：" << book.st() << endl
         << "名前：" << book.na() << endl;
}