#include "Rationnel.h"
#include <iostream>


namespace isa {
    class ComplexeQ {
        public:
            //Attribut
            Rationnel reel;
            Rationnel imaginaire;

            //Methode
            ~ComplexeQ();//Destructeur
            ComplexeQ(Rationnel reel, Rationnel imaginaire);//Constructeur
            ComplexeQ addition(ComplexeQ z);
            ComplexeQ soustraction(ComplexeQ z);
            ComplexeQ multiplication(ComplexeQ z);
            ComplexeQ division(ComplexeQ z);
    };
}