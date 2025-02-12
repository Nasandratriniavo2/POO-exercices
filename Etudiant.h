#ifndef __ETUDIANT__
#define __ETUDIANT__

#include "Personne.h"
#include "Infrastructure.h"

namespace gens {

    class Etudiant : public Personne{
        public:
            Infrastructure ecole;
            int numero;
            string classe;
            Etudiant();
            ~Etudiant();
    };
}

#endif