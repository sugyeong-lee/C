#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Random {
public:
	static int nextInRange(int low, int high); // low와 high 사이의 랜덤 정수를 리턴한다.
};

int Random::nextInRange(int low, int high) {
	int range = (high - low) + 1;
	return low + (rand() % range);  
}

class Rectangle {
private:
	static int numOfRectangles;
	int value;      // 랜덤하게 생성된 사각형의 값
public:
	Rectangle(); // 생성된 사각형의 개수 증가;
	~Rectangle() { numOfRectangles--; } // 생성된 사각형의 개수 감소
	void setValue(int value) { this->value = value; }
	int getValue() { return value; }
	static int getNumOfRectangles() { return numOfRectangles; }
};

Rectangle::Rectangle() {
	value = 0;
	numOfRectangles++;
}
int Rectangle::numOfRectangles = 0; // 0으로 초기화

int main() {
	// 난수 생성 시드 초기화
	srand(time(0));

// 여기 아래에 프로그램을 작성하여 실행화면과 같이 출력되도록 프로그램 하시오.
Rectangle rect;
Random r;

int k = 8;

cout << "생성된 사각형의 개수 = "<< rect.getValue()<< endl;
for(int i = 0; i < k ; i++){
	cout << i <<" : " << Random::nextInt(1, 40) << endl;
}




	return 0;
}
