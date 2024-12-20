#ifndef CLASS2_H

#define CLASS2_H

#include <string>

#include <iostream>

class Class2 {

public:

    Class2() = default;

    ~Class2() = default;

    static bool is_even(int number);

    static std::string greet(const std::string &name);

    static void print_message();

};

bool Class2::is_even(int number) {

    return number % 2 == 0;

}

std::string Class2::greet(const std::string &name) {

    return "Hello, " + name + "!";

}

void Class2::print_message() {

    std::cout << "This is Class2!" << std::endl;

}

#endif
