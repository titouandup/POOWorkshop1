#include <iostream>

class Date {
    public:
        int i;
        int j;
        int a;

        void afficher(){
            std::cout << "Date: " << i << "/" << j << "/" << a << std::endl;
        }
        
        int jourDansLeMois(){
            switch(j){
                case 4 : case 6 : case 9 : case 11 : return 30;
                case 2 : if(a%4 == 0){ return 29; } else { return 28; }
                default : return 31;
            }
        }

        void incr(){
            i++;
            if(i>jourDansLeMois()){
                i-=jourDansLeMois();
                j++;
                if(j>12){
                    j-=12;
                    a++;
                }
            }
        }
    };

int main() {
    Date date1;
    std::cout << "Quel jour : ";
    std::cin >> date1.i;
    std::cout << "Quel mois : ";
    std::cin >> date1.j;
    std::cout << "Quel année : ";
    std::cin >> date1.a;
    if(date1.i > date1.jourDansLeMois()){
        std::cout << "Jour invalide !!!" << std::endl;
    }
    if(date1.j > 12 ){
        std::cout << "Mois invalide !!!" << std::endl;
    }
    date1.afficher();
    date1.incr();
    date1.afficher();

    return 0;
}
