#include <iostream>
using namespace std;

class Rectangle {
    int width;  // 너비
    int height; // 높이
public:
    Rectangle(); // width=1, height=1
    Rectangle(int w, int h);
    Rectangle(const Rectangle& rect);
    int area();    // 면적 계산 멤버 함수
    void print();  // 정보(너비, 높이, 면적)를 출력하는 멤버 함수
};
// 여기 아래에 코드를 작성하시오.

Rectangle::Rectangle(const Rectangle& rect){  // 복사 생성자
	this->width = rect.width;
	this->height = rect.height;
	cout << "복사 생성자가 호출되었습니다."<< endl;
}

Rectangle::Rectangle(){  // 기본생성자
	width = height = 1;
	cout<< "기본 생성자가 호출되었습니다."<<endl;
}

Rectangle::Rectangle(int w, int h){ //매개변수가 있는 생성자
	width = w;
	height = h;
	cout << "매개변수가 있는 생성자가 호출되었습니다."<<endl;
}

int Rectangle::area(){   // 면적 계산 함수
	return width*height;
}

void Rectangle::print(){  // 너비, 높이, 면적을 출력하는 함수
	cout << "너비: " << width << ", 높이: " << height << ", 면적: " << area() << endl;
}

int main() {
    
    Rectangle rect1;
    rect1.print();

    Rectangle rect2(4, 5);
    rect2.print();

    Rectangle rect3 = rect2;
    rect3.print();

    return 0;
}