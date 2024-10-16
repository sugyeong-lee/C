#include <iostream>
using namespace std;

class Point {
	int x, y;
public:
	Point();
	Point(int a, int b);
	void show() { cout << "(" << x << ", " << y << ")" << endl; }
};

Point::Point() : Point(0, 0) { } // 위임 생성자
Point::Point(int a, int b) // 타겟 생성자
	: x(a), y(b) { }

int main() {
	Point origin;  //객체 생성
	Point target(10, 20);  //객체 생성
	origin.show();
	target.show();
}