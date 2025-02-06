namespace isa {
    class Rationnel {
        public:
            //Attribut
            int numerateur;
            int denominateur;

            //Methode
            Rationnel(int numerateur, int denominateur);//Constructeur
            ~Rationnel();//Destructeur
            Rationnel multiplication(Rationnel ratio);
            Rationnel division(Rationnel ratio);
            Rationnel addition(Rationnel ratio);
            Rationnel soustraction(Rationnel ratio);
    };
}




