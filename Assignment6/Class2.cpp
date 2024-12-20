#include "Class2.h"

#include <iostream>

#include <vector>

bool Class2::checkSize(int number, const std::vector<int> &vec) {

    return number == static_cast<int>(vec.size()) * 2;

}

int Class2::func_4_1() {

    return 5;

}

double Class2::func_4_2() {

    return 5.0;

}

void Class2::func_4_3() {

    std::cout << "This is function func_4_3" << std::endl;

}
