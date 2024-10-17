#include <iostream>
using namespace std;

int main(){
    char char_value = 'A';
    int int_value = 123;
    double double_value = 123.456;

    char *char_pointer_value = &char_value;
    int *int_pointer_value = &int_value;
    double *double_pointer_value = &double_value;

    //일반변수데이터
    cout << "char_value: " << char_value << endl;
    cout << "int_value: " << int_value << endl;
    cout << "double_value: " << double_value << endl;
    cout << endl;

    //역참조 연산자로 포인터변수가 가리키는 데이터 출력
    cout << "*char_pointer_value: " << *char_pointer_value << endl;
    cout << "*int_pointer_value: " << *int_pointer_value << endl;
    cout << "*double_pointer_value: " << *double_pointer_value << endl;
    cout << endl;

    *char_pointer_value = 'Z';
    *int_pointer_value = 321;
    *double_pointer_value = 654.321;

    cout << "char_value: " << char_value << endl;
    cout << "int_value: " << int_value << endl;
    cout << "double_value: " << double_value << endl;

    //cout << "char_value: " << &char_value << endl;
    //cout << "char_value: " << &char_pointer_value << endl;

}