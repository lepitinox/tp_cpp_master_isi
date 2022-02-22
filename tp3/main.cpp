//
// Created by adrie on 22/02/2022.
//

#include "Personne.h"
#include "iostream"
#include "Etudiant.h"
#include "vector"

int main(){
    // Test de protection des vars des objs
    Personne per1 = Personne("Castelianos","Sebastian",36);
    Personne per2 =  Personne();
    Personne per3 = Personne("Sardou","Michel",69);

    std::string nom_test_1 = per1.getNom();
    std::string nom_test_2 = per1.getNom();

    per1.getNom() = std::string("jpp");
    nom_test_1 = "jpp";
    std::cout << per1 << std::endl;
    // vu que Get_nom a été definie avec cons, on ne peux pas modifier la valeur
    per1.setNom("Michel");
    std::cout << per1 << std::endl;
    std::cout << nom_test_2 << std::endl;
    // on utilise bien la ref


    std::cout << "\nTEST Tableau :\n\n";

    auto * list_personne = new Personne[3];
    // on utilise auto pour eviter de dupliquer le nom du type
    auto * Lpers1 = new Personne;
    auto * Lpers2 = new Personne;
    auto * Lpers3 = new Personne;
    // on copy les valeurs de per1, per2 et per3
    *Lpers1 = per1;
    *Lpers2 = per2;
    *Lpers3 = per3;

    list_personne[0] = *Lpers1;
    list_personne[1] = *Lpers2;
    list_personne[2] = *Lpers3;

    for (int i = 0; i < 3; ++i) {
        std::cout << list_personne[i] << std::endl;
    }

    list_personne[0].setAge(100);
    std::cout << list_personne[0] << std::endl;
    std::cout << per1 << std::endl;
    // l'affectation a la list a cree des copies des objects precedemment definie

    delete[] list_personne;
    delete Lpers1;
    delete Lpers2;
    delete Lpers3;
    // ici on detruit les copies



    std::cout << std::endl << "Test instantiation :" << std::endl;
    auto * list_personne_2 = new Personne[2];
    list_personne_2[0] = Personne("Jean", "Jean", 6);
    list_personne_2[1] = Personne("Uwu","Sentiago",51);

    std::cout << "fin test" << std::endl<< std::endl;

    // Ici on peut voir que des objets Personne sont cree puis détruit pour le remplisage de la liste.

    delete[] list_personne_2;
    // Netoyage de la memoire

//

    // Test copy
    std::cout << "\nTest Copy : \n\n";
    Personne a = per1;
    Personne b = per2;
    Personne c = per3;
    // on fait des copies local des personnes percedemment init
    std::cout << a << " - " << b << " - " << c << std::endl;
    a = b;
    b.Copy_args(c);
    std::cout << a << " - " << b << " - " << c << std::endl;
    // on a bien que des refs

// Teste etudiant
    std::cout << "\nTeste Etu : \n\n";
    Etudiant etu = Etudiant(std::vector<int> {12,20,16,0,5,3},"Jean","Michel",98);
    std::cout << etu.clac_mean() << std::endl;
    etu.add_grade(5);
    std::cout << etu.clac_mean() << std::endl;

// test in list
    std::cout << "\nTest List Etu : \n\n";
    Etudiant etu1 = Etudiant(std::vector<int> {3,20,16,0,5,3},"Jean","Michel",98);
    Etudiant etu2 = Etudiant(std::vector<int> {12,3},"Allo","???",0);
    Etudiant etu3 = Etudiant(std::vector<int> {12,25,7},"Oui","ywh",15);

    auto * etu_list = new Etudiant[3];
// on affecte juste des ref
    etu_list[0] = etu1;
    etu_list[1] = etu2;
    etu_list[2] = etu3;
//  Test ref
    etu_list[0].setNom("New name");
    std::cout << etu1 << " != " << etu_list[0] << std::endl;
    delete[] etu_list;

    std::cout << "\nTest Etu is Pers ? : \n\n";
//  Teste utilisation d'étudiant dans une liste de Personne
    auto * personn_with_etu = new Personne[3];
    personn_with_etu[0] = etu1;
    personn_with_etu[1] = etu2;
    personn_with_etu[2] = etu3;

    for (int i = 0; i < 3; ++i) {
        std::cout << personn_with_etu[i] << std::endl;
    }
    // Marche mais Clang-Tidy warn :
    //Clang-Tidy: Slicing object from type 'Etudiant' to 'Personne' discards 28 bytes of state

    //Cela signifie que les etudiant sont devenues des personnes, ils n'ont plus access a leurs notes,
    // ni a leurs clat_mean ( methodes et args propres a etudiant on été supprimer)



    std::cout << "\nTest Etu is Pers ? : \n\n";
//  Teste utilisation de personne dans une liste d'etudiant
    auto * prs_in_list = new  Etudiant[3];
//    prs_in_list[0] = per1;
//    prs_in_list[1] = per2;
//    prs_in_list[2] = per3;
//    on ne peut pas car il n'existe pas de cast de personne vers etudiant


// Tentative de typage sale
    Personne test1 = Etudiant();
//    Etudiant test2 = Personne();
//  On retrouve les memes problemes que precedemment:
//  L'obj etudiant cast en personne perd ses attr et methodes
//  et il est impossible de convertir une personne en etudiant


    std::cout << "\n\n\nGarbage colector\n\n\n";
    return 0;
}
