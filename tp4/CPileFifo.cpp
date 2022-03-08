//
// Created by adrie on 08/03/2022.
//

#include "CPileFifo.h"
#include "iostream"
#include "CBasePile.h"

CPileFifo::CPileFifo():CBasePile() {}

void CPileFifo::operator>(int &ret) {
    int *oo = new int ;
    *oo = pop_first();
    ret = *oo;
}

