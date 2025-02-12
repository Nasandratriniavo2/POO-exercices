#ifndef __MEDECIN__
#define __MEDECIN__

#include "Personne.h"
#include "Hopital.h"

namespace gens {
    class Medecin : public Personne { 
        public:
            string competence;//Specialite
            Hopital lieuDeTravail;
            ~Medecin();
            Medecin();    
    };
}

#endif