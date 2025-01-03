// #include <iostream>
// using namespace std;

// class Math {
// public:
// 	static int abs(int a) { return a>0?a:-a; }
// 	static int max(int a, int b) { return (a>b)?a:b; }
// 	static int min(int a, int b) { return (a>b)?b:a; }
// };

// int main() {
// 	cout << Math::abs(-5) << endl;
// 	cout << Math::max(10, 8) << endl;
// 	cout << Math::min(-3, -8) << endl;
// }

#include <iostream>
using namespace std;

class Circle {
private:
	static int numOfCircles;
	int radius;
public:
	Circle(int r=1); 
	~Circle() { numOfCircles--; } // 생성된 원의 개수 감소
	double getArea()  { return 3.14*radius*radius;}
	static int getNumOfCircles() { return numOfCircles; }
}; 
Circle::Circle(int r) {
	radius = r;
	numOfCircles++; // 생성된 원의 개수 증가
}
int Circle::numOfCircles = 0; // 0으로 초기화

int main() {
	Circle *p = new Circle[10]; // 10개의 생성자 실행
	cout << "생존하고 있는 원의 개수 = " << Circle::getNumOfCircles() << endl;

	delete [] p; // 10개의 소멸자 실행
	cout << "생존하고 있는 원의 개수 = " << Circle::getNumOfCircles() << endl;

	Circle a; // 생성자 실행
	cout << "생존하고 있는 원의 개수 = " << Circle::getNumOfCircles() << endl;

	Circle b; // 생성자 실행
	cout << "생존하고 있는 원의 개수 = " << Circle::getNumOfCircles() << endl;
}