//
// Created by adrie on 22/02/2022.
//

#ifndef TP_CPP_MASTER_ISI_ETUDIANT_H
#define TP_CPP_MASTER_ISI_ETUDIANT_H
#include "Personne.h"
#include "vector"
// c++ donc utilisation de sting et vector

class Etudiant: public Personne {
   std::vector<int> noteVect;
public:
    Etudiant();
    Etudiant(std::vector<int> grades, std::string nom,std::string prenom, int age);
    int add_grade(int new_grade);
    float clac_mean();
};


#endif //TP_CPP_MASTER_ISI_ETUDIANT_H
