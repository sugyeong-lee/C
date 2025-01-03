#include <iostream>
using namespace std;

template <class T>
T biggest(T a, T b){
    if(a > b)
        return a;
        return b;
}




int main(){{
    int x[] = {1, 10, 100, 5, 4};
    cout << biggest(x, 5) << endl;
    double y[] = {6.4, 3.3, -100.6, 7.7, 8.8, 20.3};
    cout << biggest(y, 6);
}}