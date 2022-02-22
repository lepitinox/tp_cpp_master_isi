//
// Created by adrie on 22/02/2022.
//

#include <vector>
#include "Personne.h"


// Constructors

Personne::Personne() {
    ex_char = "";
    nom = "";
    premon = "";
    age = 0;

}


Personne::Personne(std::string _nom, std::string _premon, int _age) {
    ex_char = new char[_nom.size()];
    for (std::string::size_type i = 0; i <= _nom.size(); i++) {
        ex_char[i] = _nom[i];
    }
    nom = _nom;
    premon = _premon;
    age = _age;
}

// Destructor

Personne::~Personne() {
    std::cout <<  premon << " " << nom << " died." << std::endl;
}

// getters

int Personne::getAge() const {
    return age;
}

std::string Personne::getPremon() const{
    return premon;
}

std::string Personne::getNom() const {
    return nom;
}

char* Personne::getex_char() const{
    return ex_char;
}

// setters

int Personne::setNom(std::string new_value) {
    nom = new_value;
    return 0;
}

int Personne::setPremon(std::string new_value) {
    premon = new_value;
    return 0;
}

int Personne::setAge(int new_value) {
    age = new_value;
    return 0;
}


// Overload of <<
std::ostream & operator<<(std::ostream &prev, const Personne &pp){
    if (pp.getNom().empty()){
        prev << "Non Def";
        return prev;
    }else{
    prev << pp.getPremon() << " " << pp.getNom() << ", " << pp.getAge() << " ans";
    return prev;
    }
}
Personne& Personne::operator=(const Personne  &from) {
    premon = from.getPremon();
    nom = from.getNom();
    age = from.getAge();
    return *this;
}

void Personne::Copy_args(const Personne &a) {
    premon = a.getPremon();
    nom = a.getNom();
    age = a.getAge();
}

int Personne::setex_char(char *newValue) {
    ex_char = newValue;
    return 0;
}
