//
// Created by adrie on 22/02/2022.
//

#include "Etudiant.h"
#include <vector>
#include <utility>

int Etudiant::add_grade(int new_grade) {
    rip_les_notes.push_back(new_grade);
    return 0;
}

Etudiant::Etudiant():Personne() {
    rip_les_notes = std::vector<int>();

}

Etudiant::Etudiant(std::vector<int> grades, std::string nom, std::string prenom, int age):Personne{std::move(nom),std::move(prenom),age} {
    rip_les_notes = std::move(grades);
}

float Etudiant::clac_mean() {
    int mean = 0;
    for (int i: rip_les_notes) {
        mean+=i;
    }
    float ret = mean/rip_les_notes.size();
    return ret;
}
