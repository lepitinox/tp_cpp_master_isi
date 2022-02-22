//
// Created by adrie on 22/02/2022.
//

#include "Personne.h"
#include "iostream"
#include "Etudiant.h"
#include "vector"

int main(){
    auto * mdr = new Personne[3];
    // On assigne les personnes a une variable et pas directement a une case du tableau car l'affectation au table crée
    // une variable tmp qui est ensuite détruite.
    auto tmp1 = Personne("Castelianos","Sebastian",36);
    auto tmp2 =  Personne();
    auto tmp3 = Personne("Sardou","Michel",69);

    mdr[0] = tmp1;
    mdr[1] = tmp2;
    mdr[2] = tmp3;
    for (int i = 0; i < 3; ++i) {
        std::cout << mdr[i] << std::endl;
    }
    delete[] mdr;
    auto a = Personne("Jean","Michel",98);
    auto b = Personne("ogone","ocot",98);
    auto c = Personne("lol","lil",2);
    std::cout << a << " " << b << " " << c << std::endl;
    a = b;
    b.Copy_args(c);
    std::cout << a << " " << b << " " << c << std::endl;
    auto * lol = new Etudiant[3];
    lol[0] = Etudiant();
    lol[1] = Etudiant();
    lol[2] = Etudiant();
    auto etu = Etudiant(std::vector<int> {12,20,16,0,5,3},"Jean","Michel",98);
    std::cout << etu.clac_mean() << std::endl;
    return 0;
}
