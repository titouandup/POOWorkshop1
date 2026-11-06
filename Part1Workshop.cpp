#include <iostream>

class Circle {
    public:
        double x;
        double y;
        double r;

        void setpos(double x, double y){
            this->x = x;
            this->y = y;
        }

        double perimeter(){
            return 2 * 3.14 * r;
        }
};

class Rectangle {
    public:
        double x;
        double y;
        double w;
        double h;

        void setpos(double x, double y){
            this->x = x;
            this->y = y;
        }

        double perimeter(){
            return 2 * (w + h);
        }
};

int main(){
    Circle c1;
    c1.setpos(1, 1);
    c1.r = 1;
    std::cout << "Le périmètre du cercle est: " << c1.perimeter() << std::endl;

    Rectangle r1;
    r1.setpos(-1, -1);
    r1.w = 1;
    r1.h = 2;
    std::cout << "Le périmètre du rectangle est: " << r1.perimeter() << std::endl;

    return 0;
}