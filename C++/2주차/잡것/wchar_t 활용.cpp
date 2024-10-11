#include <iostream>
#include <io.h>
#include <fcntl.h>
using namespace std;

int main()
{
	wchar_t w_korean[ ] = L"반갑다 세계야!"; 	// 한국어
	wchar_t w_chinese[ ] = L"你好，世界!"; 		// 중국어
	wchar_t w_japanese[ ] = L"ハロー・ワール!"; 	// 일본어
	wchar_t w_russian[ ] = L"Привет мир!"; 	// 러시아어

	cout << "Hello, World!" << endl;
	_setmode(_fileno(stdout), 0x20000);     // 윈도우 콘솔 창 유니코드 출력 모드

	wcout << w_korean << endl;
	wcout << w_chinese << endl;
	wcout << w_japanese << endl;
	wcout << w_russian << endl;

	return 0;
}