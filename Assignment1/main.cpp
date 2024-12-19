//Klychev Bahodir st135363@student.spbu.ru

#include <iostream>
#include "greetWord.h"

int main() {
   greetWord("World");
    std::string word;
    while (true) {
        std::cout << "Input: ";
        getline(std::cin, word);
        greetWord(word);
    }
    return 0;
}
