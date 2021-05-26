#ifndef C_C___VIPMEMBER_H
#define C_C___VIPMEMBER_H

#include <string>
#include "Member.h"

class VipMember : public Member {
private:
    std::string privilege;
public:
    VipMember(const std::string& name, int no, double w, const std::string& prv) : Member(name, no, w) {
        setWeight(w);
        setPrivilege(prv);
    }
    std::string getPrivilege() const {return privilege;}
    void setPrivilege(const std::string& prv) {
        privilege = (prv != "")? prv: "未登録";
    }
};

#endif //C_C___VIPMEMBER_H
