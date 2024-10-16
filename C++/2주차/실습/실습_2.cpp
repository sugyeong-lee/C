#include <iostream>
using namespace std;
#include <cstring>
#include <string>

int main(){
    char a[100];
    char b[100];

    cout << "새 암호를 입력하세요>>";
    cin >> a;

    cout << "새 암호를 가시 한 번 입력하세요>>";
    cin >> b;

    if(strcmp(a, b) == 0){
        cout << "같습니다";}
    else
        cout << "같지 않습니다";
    return 0;
}


//strcmp는 char*나 const char* 같은 C 스타일의 문자열에 대해서만 작동
// getline의 특징:
// 공백을 포함한 한 줄의 문자열을 입력받을 수 있습니다.
// 개행 문자(\n)를 만나면 입력을 종료하고, 그 전까지의 모든 문자열을 저장합니다.