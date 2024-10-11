#include <iostream>
using namespace std;

const long double km_per_mile = 1.609344L;

long double operator"" _km(long double val)   // 리터럴 정의
{
    return val;
}

long double operator"" _mi(long double val)   // 리터럴 정의
{
    return val*km_per_mile;
}

int main(){
    long double distance_1 = 1.0_km;
    long double distance_2 = 1.0_mi;

    cout << distance_1 <<" km" << endl;
    cout << distance_2 << " km"<<endl;
    cout << distance_1+distance_2 <<" km" << endl;

    return 0;

}