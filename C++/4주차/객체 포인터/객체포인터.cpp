    #include <iostream>
    using namespace std;

    int main(){
        char char_value = 'A';
        int int_value = 123;
        double double_value = 123.456;

        char *char_pointer_value = &char_value;
        int *int_pointer_value = &int_value;
        double *double_pointer_value = &double_value;

        cout << "char_value: " << char_value << endl;
        cout << "int_value: "<< int_value << endl;
        cout << "double_value: "<< double_value << endl;
        cout << endl;

    }