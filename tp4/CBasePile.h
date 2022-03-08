//
// Created by adrie on 03/03/2022.
//

#ifndef TP_CPP_MASTER_ISI_CBASEPILE_H
#define TP_CPP_MASTER_ISI_CBASEPILE_H
#include "vector"
#include "ostream"


class CBasePile {
    std::vector<int> pile;
public:
    CBasePile();
    int pop_first();
    int pop_last();
    friend std::ostream& operator<<(std::ostream &prev, const CBasePile &pp);
    friend CBasePile& operator<(CBasePile &old, int to_add);
    virtual void operator>(int &ret);


};


#endif //TP_CPP_MASTER_ISI_CBASEPILE_H
