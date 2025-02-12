#include "Personne.h"
#include "Infrastructure.h"
#include "Hopital.h"
#include "Etudiant.h"
#include "Medecin.h"
#include <iostream>
using namespace gens;

int main() {
    //Instanciation
    Etudiant e1;
    Medecin m1;

    //Set value etudiant
    e1.setNom("RAKOTO");
    e1.setPrenom("Jean");    
    e1.setAge(21);
    e1.ecole.nomInfrastructure = "MIT Antanarivo"; 
    e1.classe = "2nd year";
    e1.numero = 20;

    //Set value medecin
    m1.setNom("RABE");
    m1.setPrenom("Koto");    
    m1.setAge(32);
    m1.competence = "Dentist";
    m1.lieuDeTravail.donnee.typeInfrastructure = "Hopital";//type de l'utilisation del'infrastructure
    m1.lieuDeTravail.donnee.nomInfrastructure = "HJRA";
    m1.lieuDeTravail.setMateriel("Scanner");

    //Get value etudiant
    cout << "This is " << e1.getNom() << " " << e1.getPrenom() << ".He is " << e1.getAge() << endl;
    cout << "He study at the " << e1.ecole.nomInfrastructure << ".He is in " << e1.classe << endl;
    cout << e1.getNom() << " is number " << e1.numero << endl << endl; 

    //Get value medecin
    cout << "This is " << m1.getNom() << " " << m1.getPrenom() << ".He is " << m1.getAge() << endl;
    cout << "He work at an " << m1.lieuDeTravail.donnee.typeInfrastructure << ".He is a medecin at " << m1.lieuDeTravail.donnee.nomInfrastructure << endl;
    cout << m1.getNom() << " is " << m1.competence << ".They have tools like " << m1.lieuDeTravail.getMateriel() << endl; 

    return 0;
}