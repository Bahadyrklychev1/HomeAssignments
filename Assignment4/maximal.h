//Клычев Баходир Исламбекович, группа 24.Б83-мм 
//Implementation of Transformer classes
#ifndef MAXIMAL_H
#define MAXIMAL_H

#include "transformer.h"

class Maximal : public Transformer {
public:
    Maximal(const std::string& name)
        : Transformer(name, "Maximal") {}

    virtual ~Maximal() = default;

    void transform() override; 

    friend std::ostream& operator<<(std::ostream& os, const Maximal& maximal) {
        os << static_cast<const Transformer&>(maximal);
        return os;
    }
};

#endif
