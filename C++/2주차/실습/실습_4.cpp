#include <iostream>
using namespace std;

bool check(){
    if(cin.fail()){
        cin.clear();
        cin.ignore(100, '\n');
        cout << "입력 오류" << endl;
        return true;
    }
    else return false;
}

int main(){

    int a, b;

    while(true){
        cout << "***** 승리장에 오신 것을 환영합니다. *****"<< endl;
        cout <<  "짬뽕 : 1, 짜장 : 2, 군만두 : 3, 종료 : 4>>";
        cin >> a;

        if(check()){
            continue;
        }

        if(a == 4){
            cout << "오늘 영업은 끝났습니다." << endl;
            break;
        }
        else if (a>4 || a < 1){
            cout << "다시 주문하세요!"<<endl;
            continue;

        }

        cout << "몇인분?";
        cin >> b;

        if (a == 1){
        cout << "짬뽕 " << b << "인분 나왔습니다";
        }
        else if(a == 2){
        cout << "짜장 " << b << "인분 나왔습니다";
        }
        else if(a == 3){
        cout << "군만두 " << b << "인분 나왔습니다";
        }
    }

    return 0;

}

// #include <iostream>
// #include <cstring>
// using namespace std;

// bool checkInputError() {
// 	if (cin.fail()) { 
// 		cin.clear();
// 		cin.ignore(100, '\n');
// 		cout << "입력 오류" << endl;
// 		return true; // 오류 있음
// 	}
// 	else
// 		return false; // 오류 없음
// }

// int main() {
// 	int menu; // 1~4
// 	int num; // 몇인분

// 	cout << "***** 승리장에 오신 것을 환영합니다. *****" << endl;
// 	while (true) {
// 		cout << "짬뽕:1, 짜장:2, 군만두:3, 종료:4>>  ";
// 		cin >> menu;
// 		if (checkInputError()) // menu에 정수 외 다른 입력하였는지 검사
// 			continue; 

// 		if (menu < 1 || menu > 4) {
// 			cout << "다시 주문하세요!!" << endl;
// 			continue;
// 		}
// 		else if (menu == 4) {
// 			cout << "오늘 영업은 끝났습니다." << endl;
// 			return 0;
// 		}
// 		// 입력이 정상적으로 이루어졌다면
// 		cout << "몇인분?";
// 		cin >> num;
// 		if (checkInputError()) continue; // num에 정수 외 다른 입력하였는지 검사
// 		if (num < 1) {
// 			cout << "다시 주문하세요!!" << endl;
// 			continue;
// 		}
// 		switch (menu) {
// 			case 1:
// 				cout << "짬뽕 " << num << "인분 나왔습니다" << endl;
// 				break;
// 			case 2:
// 				cout << "짜장 " << num << "인분 나왔습니다" << endl;
// 				break;
// 			case 3:
// 				cout << "군만두 " << num << "인분 나왔습니다" << endl;
// 				break;
// 		}
// 	}
// }