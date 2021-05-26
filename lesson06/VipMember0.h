#ifndef C_C___VIPMEMBER0_H
#define C_C___VIPMEMBER0_H

#include <string>
class VipMember0 {
private:
    std::string full_name;
    int number;
    double weight;
    std::string privilege;
public:
    VipMember0(const std::string& name, int no, double w, const std::string& prv):
            full_name(name), number(no) {
        setWeight(w);
        setPrivilege(prv);
    }
    std::string name() const {return full_name;}
    int no() const {return number;}
    double getWeight() const {return weight;}
    void setWeight(double w) {weight = (w > 0)? w:0;}
    std::string getPrivilege() const {return privilege;}
    void setPrivilege(const std::string& prv) {
        privilege = (prv != "")? prv: "未登録";
    }
};

#endif //C_C___VIPMEMBER0_H
