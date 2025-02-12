#include "Personne.h"

namespace gens {
    int Personne::getAge() {
        return age;    
    }
    
    string Personne::getPrenom() {
        return prenom;    
    }
    
    string Personne::getNom() {
        return nom;    
    }
    
    void Personne::setAge(int a) {
        age = a;    
    }
    
    void Personne::setPrenom(string str) {
        prenom = str;    
    }
    
    void Personne::setNom(string str) {
        nom = str;    
    }
    
    Personne::Personne() {
        
    }
    
    Personne::~Personne() {
    
    }
}