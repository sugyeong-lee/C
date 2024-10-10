#include <iostream>
using namespace std;

int main()
{
	int i = 0;
    do{
        i++;
        cout << "continue 문장 전에 있는 문장" << endl;
        continue;
        cout << "continue 문장 전에 있는 문장" << endl; // 이 코드는 절대 실행 될 수 없음
    }while (i<3);
   return 0;
}