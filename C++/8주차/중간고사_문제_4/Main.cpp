#include <iostream>
using namespace std;

// 두 정수를 내림차순으로 출력하는 함수
void sort(int a, int b); 

// 배열을 내림차순으로 출력하는 함수
void sort(int a[], int size); 

// 여기 아래에 void sort(int a, int b) 함수를 구현 하시오
void sort(int a, int b){  // 두 수의 내림차순 출력
	if (a>b){
		cout << a <<" "<< b;
	}
	else{
		cout << b << " " << a;
	}
}

// 여기 아래에 void sort(int a[], int size) 함수를 구현 하시오
void sort(int a[], int b){
}


int main() {
    // 두 정수 정렬 테스트
    int x = 5, y = 12;
	
	    // 배열 정렬 테스트
    int arr[] = { 3, 19, 12, 5, 8 };
    int size = sizeof(arr) / sizeof(arr[0]);
// 여기에 코드를 작성하시오
cout << "정수 5와 12의 정렬 결과:" << endl;
cout << "내림차순으로 출력: "<< sort(x, y) << endl;
cout << "배열의 정렬 결과: " << endl;
cout << "내림차순으로 정렬된 배열: " << sort(arr, size) << endl;









    return 0;
}