#include <iostream>
#include <string>

class HairStyle {
private:
    std::string name;
    std::string suitableFor;

public:
    HairStyle(const std::string& name, const std::string& suitableFor)
        : name(name), suitableFor(suitableFor) {}

    void display() const {
        std::cout << "HairStyle: " << name << " (추천 조건: " << suitableFor << ")" << std::endl;
    }
};

class Makeup {
private:
    std::string style;
    std::string suitableFor;

public:
    Makeup(const std::string& style, const std::string& suitableFor)
        : style(style), suitableFor(suitableFor) {}

    void display() const {
        std::cout << "Makeup: " << style << " (추천 조건: " << suitableFor << ")" << std::endl;
    }
};
