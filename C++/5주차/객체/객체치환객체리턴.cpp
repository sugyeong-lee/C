#include <iostream>
using namespace std;

class Circle{
    int radius;
public:
    Circle(){radius = 1;}
    Circle(int radius){this->radius=radius;}
    void setRadius(int radius){this->radius=radius;}
    double getArea(){return 3.14*radius*radius;}
};

Circle getCircle(){   //반환 타입이 Circle 클래스의 객체이기 때문
    Circle tmp(30);
    return tmp;
}

int main(){
    Circle c;
    cout << c.getArea()<<endl;

    c = getCircle();
    cout << c.getArea()<<endl;
}