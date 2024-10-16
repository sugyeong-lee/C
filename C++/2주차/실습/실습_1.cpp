// #include <iostream>
// using namespace std;

// int main() {
//     int n = 100;
//     for(int i = 0; i <= n; i++) {
//         cout << i <<" ";
//         if(i%10==0) cout << endl;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
	for (int i = 1; i <= 100; i++) {
		cout << i;
		if (i % 10 == 0) // 10의 배수인 경우
			cout << endl;
		else
			cout << '\t';
	}
}