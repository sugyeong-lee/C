#include <iostream>
using namespace std;

int bigger(int a, int b){
    if(a>b) return a;
    else return b;
}

bool dividedBy3(int n){
    if(n%3==0) return true;
    else return false;
}

int main(){
    int a, b, n;
    int re;

    cin >> a>>b;
    n = bigger(a,b);
    cout << a << "중" << b << "중 큰 값은 " << n << "입니다\n";
    
    re = dividedBy3(n);
    if (re ==true)
    cout << n << "는 " <<"3의 배수입니다\n";
    else
    cout << n << "는 " <<"3의 배수가 아닙니다\n";

    return 0;
}