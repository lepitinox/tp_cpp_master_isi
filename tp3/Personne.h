//
// Created by adrie on 22/02/2022.
//

#ifndef TP_CPP_MASTER_ISI_PERSONNE_H
#define TP_CPP_MASTER_ISI_PERSONNE_H
#include "string"
#include "iostream"

class Personne {
    std::string nom;
    std::string premon;
    int age;
public:
    Personne();
    Personne(std::string _nom, std::string _premon,int _age);
    ~Personne();

    // Adding const to be called and not modified
    std::string Get_nom() const;
    int Set_nom(std::string new_value);

    // Adding const to be called and not modified
    std::string Get_premon() const;
    int Set_premon(std::string new_value);

    // Adding const to be called and not modified
    int Get_age() const;
    int Set_age(int new_value);
    void Copy_args(const Personne &a);
    // Overload of <<
    Personne& operator=(Personne const &from);
};
std::ostream& operator<<(std::ostream &prev, const Personne &pp);



#endif //TP_CPP_MASTER_ISI_PERSONNE_H
