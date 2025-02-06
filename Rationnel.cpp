#include <iostream>
#include "Rationnel.h"
using namespace std;

namespace isa {

    Rationnel Rationnel::soustraction(Rationnel ratio) {
        int nouveauNumerateur = (numerateur * ratio.denominateur) - (ratio.numerateur * denominateur);
        int nouveauDenominateur = denominateur * ratio.denominateur; 

        //Retourne un nouvel objet qui contient le resultat de la soustraction
        return Rationnel(nouveauNumerateur, nouveauDenominateur);
    }

    Rationnel Rationnel::addition(Rationnel ratio) {
        int nouveauNumerateur = (numerateur * ratio.denominateur) + (ratio.numerateur * denominateur);
        int nouveauDenominateur = denominateur * ratio.denominateur; 

        //Retourne un nouvel objet qui contient le resultat de l'addition
        return Rationnel(nouveauNumerateur, nouveauDenominateur);
    }

    Rationnel Rationnel::division(Rationnel ratio) {
        int nouveauNumerateur = numerateur * ratio.denominateur;
        int nouveauDenominateur = denominateur * ratio.numerateur;
        
        //Retourne un nouvel objet qui contient le resultat de la division
        return Rationnel(nouveauNumerateur, nouveauDenominateur);
    }

    Rationnel Rationnel::multiplication(Rationnel ratio) {
        int nouveauNumerateur = numerateur * ratio.numerateur;
        int nouveauDenominateur = denominateur * ratio.denominateur;

        //Retourne un nouvel objet qui contient le resultat de la multiplication
        return Rationnel(nouveauNumerateur, nouveauDenominateur);
    }

    //Constructeur
    Rationnel::Rationnel(int numerateur, int denominateur) {
        if (denominateur == 0)
            exit(1);
    }

    //Destructeur
    Rationnel::~Rationnel() {

    }
}