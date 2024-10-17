#include<iostream>
using namespace std;

int main(){
    int array[5];
    int *pointer_array = array;

    cout << "array : " << array << endl;
    cout << "poiner_array : " << pointer_array << endl;

    cout << "sizeof(array) : " << sizeof(array) << endl;
    cout << "sizeof(poiner_array) : " << sizeof(pointer_array) << endl;

    return 0;
}