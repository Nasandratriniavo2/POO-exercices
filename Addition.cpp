#include "Rationnel.h"
#include "Complexe.h"
#include "ComplexeQ.h"
#include "Addition.h"


isa::ComplexeQ Addition::addition(isa::Complexe a, isa::Rationnel b) {
    int numera = b.numerateur + (a.reel * b.denominateur);
    int denom = b.denominateur;

    isa::Rationnel imaginaire = isa::Rationnel(a.imaginaire, 1);
    isa::Rationnel reelle = isa::Rationnel(numera, denom);

    return isa::ComplexeQ(reelle,imaginaire);
}

isa::Rationnel Addition::addition(isa::Rationnel a, float b) {
    int numera = a.numerateur + (b * a.denominateur);
    int denom = a.denominateur;
    
    return isa::Rationnel(numera, denom);
}

isa::Rationnel Addition::addition(isa::Rationnel a, int b) {
    
    int numera = a.numerateur + (b * a.denominateur);
    int denom = a.denominateur;
    
    return isa::Rationnel(numera, denom);
}

isa::Complexe Addition::addition(isa::Complexe a, float b) {
    int partieReelle = a.reel + b;

    return isa::Complexe(partieReelle, a.imaginaire);
}


isa::Complexe Addition::addition(isa::Complexe a, int b) {
    int partieReelle = a.reel + b;

    return isa::Complexe(partieReelle, a.imaginaire);
}           

Addition::Addition() {

}

Addition::~Addition() {

}


