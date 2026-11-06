#include <iostream>

class Creature {
    private :
        int pv;
        int pa;
        int niveau;
    public :
        Creature(){
            pv = 5;
            pa = 5;
            niveau = 1;
        }

        Creature(int a, int b, int c){
            pv = a;
            pa = b;
            niveau = c;
        }

        void affiche(){
            std::cout << "Il est grand, il est moche, il a " << pv << "HP et " << pa << " PA du haut de son niveau " << niveau << std::endl;
        }

        int attaque(){
            return pa;
        }

        void subitDegat(int degat){
            pv -= degat;
        }

        int estVivant(){
            if(pv>0){
                return 1;
            } else {
                return 0;
            }
        }
};

class Heros {
    private :
        std::string nom;
        int pv;
        int pa;
    public :
        Heros(){
            nom = "BOT";
            pv = 5;
            pa = 5;
        }

        Heros(std::string a, int b, int c){
            nom = a;
            pv = b;
            pa = c;
        }

        void affiche(){
            std::cout << "Il est grand, il est beau, le grand " << nom << ", il a " << pv << "HP et " << pa << " PA" << std::endl;
        }

        int attaque(){
            return pa;
        }


        int estVivant(){
            if(pv>0){
                return 1;
            } else {
                return 0;
            }
        }

        void subitDegat(int degat){
            pv -= degat;
                
        }
};

int main(){
    Heros truc("Amory", 40, 1);
    Creature muche(10, 30, 2);
    truc.affiche();
    muche.affiche();
    int damage = truc.attaque();
    muche.subitDegat(damage);
    damage = muche.attaque();
    truc.subitDegat(damage);
    truc.affiche();
    muche.affiche();
    return 0;
}