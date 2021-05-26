#ifndef C_C___MEMBER_H
#define C_C___MEMBER_H

#include <string>

class Member {
private:
    std::string full_name;
    int number;
    double weight;
public:
    Member(const std::string& name, int no, double w): full_name(name), number(no) {
        setWeight(w);
    }
    std::string name() const {return full_name;}
    int no() const {return number;}
    double getWeight() const {return weight;}
    void setWeight(double w) {weight = (w > 0)? w:0;}
};

#endif //C_C___MEMBER_H
