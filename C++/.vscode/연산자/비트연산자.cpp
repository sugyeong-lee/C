#include <iostream>
using namespace std;

int main()
{
    unsigned int value = 0x00000000;
    
    value = ~value;  // 보수 변환
    cout << hex << value << endl;  //16진수 변환
    
     return 0;
}