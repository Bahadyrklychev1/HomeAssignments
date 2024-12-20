#ifndef CLASS1_H
#define CLASS1_H

#include <string>
#include <list>

class Class1 {
public:
    Class1() = default;

    ~Class1() = default;

    static bool contains(const std::string &str, const std::list<std::string> &lst);

    static size_t getListSize();

    static std::string getLastElement();

    static void printList();
};

#endif
