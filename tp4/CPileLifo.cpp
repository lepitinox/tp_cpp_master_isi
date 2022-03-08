//
// Created by adrie on 08/03/2022.
//

#include "CPileLifo.h"

CPileLifo::CPileLifo():CBasePile(){}

void CPileLifo::operator>(int &ret) {
    int *oo = new int ;
    *oo = pop_last();
    ret = *oo;
}




