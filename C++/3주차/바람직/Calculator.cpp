#include <iostream>
using namespace std;

#include "Calculator.h"
#include "Adder.h"

void Calculator::run(){
    cout << "두 개의 수를 입력하세요>>";
    int a, b;
    cin >> a >> b;
    Adder Adder(a, b);
    cout << Adder.process();
}