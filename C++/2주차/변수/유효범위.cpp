#include <iostream>
using namespace std;

void print() {
    int value = 10;
    cout << "print 함수내부에서의 지역 변수 value : " << value << endl;
}

int main(){
    int value = 5;
    cout << "main 함수 내부에서의 지역 변수 value : "<<value<<endl;

    print();

    cout << "다시 main 함수 내부네서의 지역변수 value : "<<value<<endl;
    return 0;
}