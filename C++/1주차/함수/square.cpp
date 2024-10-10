#include <iostream>
using namespace std;

int square(int n){
    return n*n;
}

int main(){
    int n;

    cout << "숫자를 입력시오" << endl;
    cin >> n;

    cout << "제곱값은 " << square(n)<<"이다.";
    return 0;
}