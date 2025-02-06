#include "Complexe.h"

namespace isa {

    Complexe Complexe::division(Complexe z) {
        int denominateur = (z.reel * z.reel) + (z.imaginaire * z.imaginaire);
        int partieReelle = ((reel * z.reel) + (imaginaire * z.imaginaire)) / (denominateur);
        int partieImaginaire = ((imaginaire * z.reel) - (reel * z.imaginaire)) / (denominateur);

        //Retourne un nouvel objet contenant la division dans C
        return Complexe(partieReelle, partieImaginaire);
    }

    Complexe Complexe::multiplication(Complexe z) {
        int partieReelle = ((reel * z.reel) - (imaginaire * z.imaginaire));
        int partieImaginaire = ((reel * z.imaginaire) + (z.reel * imaginaire));

        //Retourne un nouvel objet contenant la multiplication dans C
        return Complexe(partieReelle, partieImaginaire);
    }

    Complexe Complexe::soustraction(Complexe z) {
        int partieReelle = reel - z.reel;
        int partieImaginaire = imaginaire - z.imaginaire;

        //Retourne un nouvel objet contenant la soustraction dans C
        return Complexe(partieReelle, partieImaginaire);
    }

    Complexe Complexe::addition(Complexe z) {
        int partieReelle = reel + z.reel;
        int partieImaginaire = imaginaire + z.imaginaire;

        //Retourne un nouvel objet contenant l'addition dans C
        return Complexe(partieReelle, partieImaginaire);
    }

    Complexe::Complexe(int reel, int imaginaire) {

    }


    //Destructeur
    Complexe::~Complexe() {

    }
}

