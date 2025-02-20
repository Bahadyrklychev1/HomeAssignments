#include "Class1.h"
#include <iostream>

bool Class1::bar(int number, const std::vector<float>&) {
    return number > 0;
}

int Class1::method_1() {
    return 10;
}

float Class1::method_2() {
    return 10.5f;
}

void Class1::method_3() {
    std::cout << "Class1 method_3 executed\n";
}
