#include <iostream>
using namespace std;

int main(){
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    sum += i;

    cout << "1부터 10까지 정수의 합 = " << sum << endl;
    return 0;
}

// #include <iostream>
// using namespace std;

// int main() {
// 	int i, a, b, sum=0;
// 	cout << "두 개의 정수 입력>>";
// 	cin >> a >> b;

// 	for(i=a; i<=b; i++) { // a에서 b까지 합 계산
// 		sum += i;
// 	}

// 	cout << a << "에서 " << b << "까지 합은 " << sum;
// }