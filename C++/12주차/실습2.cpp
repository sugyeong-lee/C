#include <iostream>
#include <fstream>
using namespace std;

void showStreamState(ios& stream) {
	cout << "eof() " << stream.eof() << endl;
	cout << "fail() " << stream.fail() << endl;
	cout << "bad() " << stream.bad() << endl;
	cout << "good() " << stream.good() << endl;
}


int main() {
	const char* noExistFile = “c:\\temp\\noexist.txt"; // 존재하지 않는 파일명

    cout << "읽기 시작" << endl;
    
}