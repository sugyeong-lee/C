#include <iostream>
#include <vector>
#include <string>
#include "Clothes.h"

using namespace std;

vector<string> upperClothes = {"셔츠", "티셔츠"};
vector<string> lowerClothes = {"청바지", "반바지"};
vector<string> accessories = {"모자", "신발"};

void Clothes::displayMenu() {
    int choice;

    while (true) {
        cout << "\n===== 옷 선택 메뉴 =====\n";
        cout << "1. 상의 목록 보기\n";
        cout << "2. 하의 목록 보기\n";
        cout << "3. 액세서리 목록 보기\n";
        cout << "4. 새로운 옷 등록\n";
        cout << "5. 옷 선택 완료\n";
        cout << "6. 종료\n";
        cout << "선택: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "상의 목록:\n";
                for (const auto& item : upperClothes) {
                    cout << "- " << item << endl;
                }
                break;
            case 2:
                cout << "하의 목록:\n";
                for (const auto& item : lowerClothes) {
                    cout << "- " << item << endl;
                }
                break;
            case 3:
                cout << "액세서리 목록:\n";
                for (const auto& item : accessories) {
                    cout << "- " << item << endl;
                }
                break;
            case 4:
                addClothes();
                break;
            case 5:
                chooseClothes();
                return;
            case 6:
                return;
            default:
                cout << "잘못된 입력입니다. 다시 선택하세요.\n";
        }
    }
}

void Clothes::addClothes() {
    int type;
    string name;

    cout << "\n추가할 옷 종류를 선택하세요:\n";
    cout << "1. 상의\n2. 하의\n3. 액세서리\n선택: ";
    cin >> type;

    cout << "옷 이름을 입력하세요: ";
    cin.ignore();
    getline(cin, name);

    switch (type) {
        case 1:
            upperClothes.push_back(name);
            break;
        case 2:
            lowerClothes.push_back(name);
            break;
        case 3:
            accessories.push_back(name);
            break;
        default:
            cout << "잘못된 입력입니다.\n";
    }

    cout << name << "이(가) 추가되었습니다.\n";
}

void Clothes::chooseClothes() {
    cout << "\n선택 완료:\n";
    cout << "- 상의: " << (upperClothes.empty() ? "없음" : upperClothes[0]) << endl;
    cout << "- 하의: " << (lowerClothes.empty() ? "없음" : lowerClothes[0]) << endl;
    cout << "- 액세서리: " << (accessories.empty() ? "없음" : accessories[0]) << endl;
}
