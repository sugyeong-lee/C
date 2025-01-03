#ifndef QUESTION_H
#define QUESTION_H

#include <iostream>
#include <vector>
#include <string>

class Question {
public:
    // 메뉴 출력 함수
    static void displayMenu(const std::string& title, const std::vector<std::string>& options);

    // 사용자 입력 처리 함수
    static int getChoice(int maxOption);

    // 사용자 선택에 따른 처리 함수
    static void processChoice(int choice);
};

#endif // QUESTION_H
