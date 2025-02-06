#include "Complexe.h"
#include "ComplexeQ.h"
#include "Rationnel.h"


class Addition {
    public:
        ~Addition();
        Addition();
        //Addition entre complexe et entier
        isa::Complexe addition(isa::Complexe a, int b);
        isa::Complexe addition(isa::Complexe a, float b);
        isa::Rationnel addition(isa::Rationnel a, int b);
        isa::Rationnel addition(isa::Rationnel a, float b);
        isa::ComplexeQ addition(isa::Complexe a, isa::Rationnel);
};
