#include <iostream>
using namespace std;

class Circle{
    public:
    int radius;
    double getArea();
};

double Circle::getArea(){
    return 3.14*radius*radius;
}

int main(){
    Circle dount;
    dount.radius = 1;
    double area = dount.getArea();
    cout << "dount 면적은 " << area << endl;

    Circle pizza;
    pizza.radius = 30;
    area = pizza.getArea();
    cout << "pizza의 면적은 " << area << endl;
}