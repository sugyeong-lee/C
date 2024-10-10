// 일반 변수
// #include <iostream>
// using namespace std;

// void change_negative(int val)
// {
//     if(val>0){
//         val = -val;
//     }
// }

// int main(){
//     int a = 3, b = -3;
//     cout << "a : " << a << endl;
//     cout << "b : " << b << endl;

//     change_negative(a);
//     change_negative(b);

//     cout << "change_negative(a) : "  << a << endl;
//     cout << "change_negative(b) : "  << b << endl;
//     return 0;
// }


// 포인터 변수
#include <iostream>
using namespace std;

void change_negative(int* val)
{
    if(*val>0){
        *val = -(*val);
    }
}

int main(){
    int a = 3, b = -3;
    cout << "a : " << a << endl;
    cout << "b : " << b << endl;

    change_negative(&a);
    change_negative(&b);

    cout << "change_negative(a) : "  << a << endl;
    cout << "change_negative(b) : "  << b << endl;
    return 0;
}