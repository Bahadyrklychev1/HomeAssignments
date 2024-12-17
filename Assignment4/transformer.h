//Клычев Баходир Исламбекович, группа 24.Б83-мм 
//Implementation of Transformer classes
#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include <string>
#include <iostream>

enum class Direction {
    LEFT,
    RIGHT
};

class Transformer {
protected:
    std::string name;
    std::string type; 

public:
    Transformer(const std::string& name, const std::string& type)
        : name(name), type(type) {}

    virtual void transform() = 0;

    virtual ~Transformer() = default; 

    bool operator<(const Transformer& other) const {
        return name < other.name;
    }

    bool operator>(const Transformer& other) const {
        return name > other.name;
    }

    friend std::ostream& operator<<(std::ostream& os, const Transformer& transformer) {
        os << "Name: " << transformer.name << ", Type: " << transformer.type;
        return os;
    }

    virtual bool move();
    virtual bool turn(Direction dir);
    virtual bool jump();
    virtual bool fire();
    virtual bool ultimate();
};

#endif 
