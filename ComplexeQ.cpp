#include "ComplexeQ.h"


namespace isa {
    ComplexeQ ComplexeQ::division(ComplexeQ z) {
        Rationnel denominateur = z.reel.multiplication(z.reel).addition(z.imaginaire.multiplication(z.imaginaire));
        Rationnel partieReelle = reel.multiplication(z.reel).addition(imaginaire.multiplication(z.imaginaire)).division(denominateur);
        Rationnel partieImaginaire = imaginaire.multiplication(z.reel).soustraction(reel.multiplication(z.imaginaire)).division(denominateur);
        
        //Retourne un nouvel objet contenant la division
        return ComplexeQ(partieReelle, partieImaginaire);
    }

    ComplexeQ ComplexeQ::multiplication(ComplexeQ z) {
        Rationnel partieReelle = reel.multiplication(z.reel).soustraction(imaginaire.multiplication(z.imaginaire));
        Rationnel partieImaginaire = reel.multiplication(z.imaginaire).addition(imaginaire.multiplication(z.reel));
        
        //Retourne un nouvel objet contenant la multiplication
        return ComplexeQ(partieReelle, partieImaginaire);
    }

    ComplexeQ ComplexeQ::soustraction(ComplexeQ z) {
        Rationnel partieReelle = reel.soustraction(z.reel);
        Rationnel partieImaginaire = imaginaire.soustraction(z.imaginaire);

        //Retourne un nouvel objet contenant la soustraction
        return ComplexeQ(partieReelle, partieImaginaire);
    }

    ComplexeQ ComplexeQ::addition(ComplexeQ z) {
        Rationnel partieReelle = reel.addition(z.reel);
        Rationnel partieImaginaire = imaginaire.addition(z.imaginaire);

        //Retourne un nouvel objet contenant l'addition
        return ComplexeQ(partieReelle, partieImaginaire);
    }

    // Constructeur:Initialisation des attributs
    ComplexeQ::ComplexeQ(Rationnel reel, Rationnel imaginaire) : reel(reel), imaginaire(imaginaire) {

    }  


    //Destructeur
    ComplexeQ::~ComplexeQ() {

    }
}