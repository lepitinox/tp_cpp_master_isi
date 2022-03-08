//
// Created by adrie on 03/03/2022.
//

#include "CBasePile.h"
# include "iostream"
#include "CPileLifo.h"
CBasePile::CBasePile()= default;

std::ostream & operator<<(std::ostream &prev, const CBasePile &pp){
    for (int i : pp.pile) {
        prev << i << " ";
    }
    prev<<std::endl;
    return prev;
    }

CBasePile& operator<(CBasePile &old, int pp) {
    old.pile.push_back(pp);
    return old;
}

int CBasePile::pop_first() {
    int ret = pile.front();
    pile.erase(pile.begin());
    return ret;
}

int CBasePile::pop_last() {
    int ret = pile.back();
    pile.pop_back();
    return ret;
}

void CBasePile::operator>(int &ret) {

    std::cout << "Warning.." << std::endl;
}

