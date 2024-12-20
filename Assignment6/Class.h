#ifndef CLASS_H

#define CLASS_H

#include <string>

#include <map>

class Class {

public:

    Class() = default; 

    Class(const Class2 &other) = default; 

    ~Class() = default; 

    static void addPair(const std::string &key, int value, std::map<std::string, int> &dataMap) {

        dataMap[key] = value;

    }

    static int getValue(const std::string &key, const std::map<std::string, int> &dataMap) {

        auto it = dataMap.find(key);

        return (it != dataMap.end()) ? it->second : -1;  

    }

    static void displayMap(const std::map<std::string, int> &dataMap) {

        for (const auto &pair : dataMap) {

            std::cout << pair.first << ": " << pair.second << std::endl;

        }

    }

};

#endif
