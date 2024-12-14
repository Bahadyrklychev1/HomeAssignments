//Klychev Bahodir st135363@student.spbu.ru

#include <iostream>
#include "greetWord.h"

using namespace std;

int main() {
   greetWord("World");
    string word;
    while (true) {
        cout << "Input: ";
        getline(cin, word);
        greetWord(word);
    }
    return 0;
}
