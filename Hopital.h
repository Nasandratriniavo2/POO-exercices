#ifndef __HOPITAL__
#define __HOPITAL__

#include "Infrastructure.h"

class Hopital {
    private:
        //On doit obligatoiremen avoir des infrastructures pour avoir un hopital
        string materiel;
                
    public:
        Infrastructure donnee; 
        
        ~Hopital();
        Hopital();
        void setMateriel(string str);
        string getMateriel();
};

#endif