#ifndef BOOK_H_
#define BOOK_H_
#include <string>

class Book{
private:
    std::string title;
    std::string writer;
    std::string company;
    int age;
    int price;
    std::string genre;
    int number;
    bool state;
    std::string name;

public:
    Book(std::string t, std::string w, std::string c, int a, int p, std::string g, int num, bool s, std::string nm);
    std::string ti(){return title;}
    std::string wr(){return writer;}
    std::string co(){return company;}
    int ag(){return age;}
    int pr(){return price;}
    std::string ge(){return genre;}
    int nu(){return number;}
    bool st(){return state;}
    std::string na(){return name;}

    void ChangeBorrower(std::string nm);
    void ChangeState(bool st);

};

#endif //C_C___BOOK_H
