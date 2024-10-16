#include <iostream>
using namespace std;

class Circle{
    public:
    int radius;
    Circle();
    Circle(int r);
    double getArea();
};

Circle::Circle() : Circle(1){ } // 위임생성자

Circle::Circle(int r){
    radius = r;
    cout << "반지름 " << radius << " 원 생성" << endl;
}

double Circle::getArea(){
    return 3.14*radius*radius;
}

int main(){
    Circle dount;
    double area = dount.getArea();
    cout << "dount 면적은 " << area << endl;

    Circle pizza(30);
    area = pizza.getArea();
    cout << "pizza 면적은 " << area << endl;
}
