#include "Class2.h"
#include <iostream>

bool Class2::bar(int, const std::vector<float>& vector) {
    return !vector.empty();
}

int Class2::method_1() {
    return 20;
}

float Class2::method_2() {
    return 20.5f;
}

void Class2::method_3() {
    std::cout << "Class2 method_3 executed" << std::endl;
}
