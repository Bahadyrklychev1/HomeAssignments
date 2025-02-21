#include "Class3.h"
#include <iostream>

bool Class3::bar(int number, const std::vector<float>& vec) {
    return number == static_cast<int>(vec.size()) * -1;
}

int Class3::method_1() {
    return 30;
}

float Class3::method_2() {
    return 30.5f;
}

void Class3::method_3() {
    std::cout << "Class3 method_3 executed" << std::endl;
}
