#include <iostream>
#include <fstream>
#include <string>

class Weather {
private:
    std::string condition; // 날씨 상태 (맑음, 비, 눈 등)
    double temperature;    // 온도

public:
    // 날씨 데이터 초기화
    Weather() : condition("Unknown"), temperature(0.0) {}

    // 날씨 데이터를 파일에서 읽어오는 함수
    void loadWeatherFromFile(const std::string& fileName) {
        std::ifstream file(fileName);
        if (!file.is_open()) {
            throw std::runtime_error("날씨 데이터를 불러올 수 없습니다.");
        }

        getline(file, condition); // 첫 줄: 날씨 상태
        file >> temperature;      // 두 번째 줄: 온도
        file.close();
    }

    // 현재 날씨 출력
    void displayWeather() const {
        std::cout << "현재 날씨: " << condition << ", 온도: " << temperature << "°C" << std::endl;
    }

    // 너무 추운 경우 경고 출력
    void checkTemperature() const {
        if (temperature < -10.0) {
            std::cout << "[경고] 너무 춥습니다! 외출 시 방한용품을 준비하세요.\n";
        }
    }

    // 날씨 조건 및 온도 접근자
    std::string getCondition() const { return condition; }
    double getTemperature() const { return temperature; }
};
