#include <iostream>
using namespace std;

int average(int array[], int count);

int main(){
    int score[5] = {90, 75, 80, 100, 65};
    cout << "평균 점수 : " << average(score, 5) << endl;
    return 0;
}

int average(int array[], int count){
    int sum = 0;
    for(int i = 0; i<count; i++)
    sum+=array[i];
    return sum/count;
}