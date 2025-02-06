namespace isa {
    class Complexe {
        public:
            //Attribut
            int reel;
            int imaginaire;

            //Methode
            ~Complexe();//Destructeur
            Complexe(int reel, int imaginaire);//Constructeur
            Complexe addition(Complexe z);
            Complexe soustraction(Complexe z);
            Complexe multiplication(Complexe z);
            Complexe division(Complexe z);
    };
}