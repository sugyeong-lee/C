#include <iostream>
#include <string>

class Accessory {
protected:
    std::string name;
    std::string color;

public:
    Accessory(const std::string& name, const std::string& color)
        : name(name), color(color) {}

    virtual void display() const {
        std::cout << "Accessory: " << name << " (" << color << ")" << std::endl;
    }

    virtual ~Accessory() {}
};
