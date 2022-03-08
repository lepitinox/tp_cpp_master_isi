//
// Created by adrie on 08/03/2022.
//

#ifndef TP_CPP_MASTER_ISI_CPILEFIFO_H
#define TP_CPP_MASTER_ISI_CPILEFIFO_H
#include "CBasePile.h"


class CPileFifo : public virtual CBasePile {
public:
    CPileFifo();
    void operator>(int &ret);
};


#endif //TP_CPP_MASTER_ISI_CPILEFIFO_H
