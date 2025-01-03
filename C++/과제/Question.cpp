#include "Question.h"
#include "Clean.h"
#include <iostream>
using namespace std;

// 메뉴 출력
void Question::displayMenu(const string& title, const vector<string>& options) {
    cout << "\n===== " << title << " =====\n";
    for (size_t i = 0; i < options.size(); ++i) {
        cout << i + 1 << ". " << options[i] << "\n";
    }
    cout << "선택: ";
}

// 사용자 입력 처리
int Question::getChoice(int maxOption) {
    int choice;
    cin >> choice;
    if (choice < 1 || choice > maxOption) {
        cout << "잘못된 입력입니다. 다시 선택하세요.\n";
        return getChoice(maxOption);
    }
    return choice;
}

// 선택에 따른 로직 처리
void Question::processChoice(int choice) {
    switch (choice) {
        case 1:
            Clean::washFace(); // 세수 실행
            break;
        case 2:
            Clean::takeShower(); // 샤워 실행
            break;
        case 3:
            Clean::brushTeeth(); // 양치 실행
            break;
        case 4:
            cout << "청결 단계를 건너뛰었습니다.\n";
            break;
        case 5:
            cout << "프로그램을 종료합니다.\n";
            exit(0);
        default:
            cout << "잘못된 입력입니다. 다시 선택하세요.\n";
            break;
    }
}
