#ifndef __PERSONNE__
#define __PERSONNE__

#include <string>
using namespace std;

namespace gens {
    class Personne {
        private:
            string nom;
            string prenom;
            int age;
            
        public:
            ~Personne();//Destructeur
            Personne(); //Constructeur
            //Setter et Getter
            void setNom(string str);
            void setPrenom(string str);
            void setAge(int a);
            string getNom();
            string getPrenom();
            int getAge();
    };
}

#endif