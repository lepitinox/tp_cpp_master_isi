//
// Created by adrie on 22/02/2022.
//

#include "Personne.h"


// Constructors

Personne::Personne() {
    nom = "";
    premon = "";
    age = 0;

}


Personne::Personne(std::string _nom, std::string _premon, int _age) {
    nom = _nom;
    premon = _premon;
    age = _age;
}

// Destructor

Personne::~Personne() {
    std::cout << "pls don't kill me ! \n" << premon << " died." << std::endl;
}

// getters

int Personne::Get_age() const {
    return age;
}

std::string Personne::Get_premon() const{
    return premon;
}

std::string Personne::Get_nom()const {
    return nom;
}

// setters

int Personne::Set_nom(std::string new_value) {
    nom = new_value;
    return 0;
}

int Personne::Set_premon(std::string new_value) {
    premon = new_value;
    return 0;
}

int Personne::Set_age(int new_value) {
    age = new_value;
    return 0;
}


// Overload of <<
std::ostream & operator<<(std::ostream &prev, const Personne &pp){
    if (pp.Get_nom().empty()){
        prev << "Non Def";
        return prev;
    }else{
    prev <<  pp.Get_premon() << " " << pp.Get_nom() << ", " << pp.Get_age() << " ans";
    return prev;
    }
}
Personne& Personne::operator=(const Personne  &from) {
    premon = from.Get_premon();
    nom = from.Get_nom();
    age = from.Get_age();
    return *this;
}

void Personne::Copy_args(const Personne &a) {
    premon = a.Get_premon();
    nom = a.Get_nom();
    age = a.Get_age();
}
