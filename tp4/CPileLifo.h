//
// Created by adrie on 08/03/2022.
//

#ifndef TP_CPP_MASTER_ISI_CPILELIFO_H
#define TP_CPP_MASTER_ISI_CPILELIFO_H
#include "CBasePile.h"


class CPileLifo : public virtual CBasePile {
public:
    CPileLifo();
    void operator>(int &ret);
};


#endif //TP_CPP_MASTER_ISI_CPILELIFO_H
