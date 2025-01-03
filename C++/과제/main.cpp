#include <iostream>
using namespace std;

#include <vector>
#include <string>

#include "Question.h"
#include "Clean.h"
#include "Clothes.h"


int main() {
    while (true) {
        // 메인 메뉴 옵션 정의
        vector<std::string> mainOptions = {"세수", "샤워", "양치", "건너뛰기", "종료"};

        // Question 클래스를 사용해 메뉴 출력 및 사용자 선택 받기
        Question::displayMenu("외출 준비 시뮬레이션", mainOptions);
        int mainChoice = Question::getChoice(mainOptions.size());

        // 사용자 선택에 따른 처리
        Question::processChoice(mainChoice); // Question.cpp로 로직 이동
    }
}
