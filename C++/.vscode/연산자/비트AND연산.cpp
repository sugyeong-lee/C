#include <iostream>
#include <bitset>
using namespace std;

int main(){
    int a = 13;
    int b = 27;
    int c = a & b;

    cout << "a = " << bitset<8>(a) << " : " << a << endl; // 8비트 이진수로 변환 출력
    cout << "b = " << bitset<8>(b) << " : " << b << endl;
    cout << "c = " << bitset<8>(c) << " : " << c << endl;

    return 0;
}