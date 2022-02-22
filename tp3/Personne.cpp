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
