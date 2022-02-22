//
// Created by adrie on 22/02/2022.
//

#include "Etudiant.h"
#include <vector>
#include <utility>

int Etudiant::add_grade(int new_grade) {
    noteVect.push_back(new_grade);
    return 0;
}

Etudiant::Etudiant():Personne() {
    noteVect = std::vector<int>();

}

Etudiant::Etudiant(std::vector<int> grades, std::string nom, std::string prenom, int age):Personne{std::move(nom),std::move(prenom),age} {
    noteVect = std::move(grades);
}

float Etudiant::clac_mean() {
    float mean = 0;
    for (int i: noteVect) {
        mean+=i;
    }
    float ret = mean / noteVect.size();
    return ret;
}
