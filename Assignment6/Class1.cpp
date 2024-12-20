#include "Class1.h"

#include <iostream>

#include <vector>

bool Class1::foo(int, const std::vector<double> &vector) {

    return !vector.empty();

}

int Class1::c_3_1() {

    return 5;

}

double Class1::c_3_2() {

    return 5.5;

}

void Class1::c_3_3() {

    std::cout << "Class1 c_3_3" << std::endl;

}
