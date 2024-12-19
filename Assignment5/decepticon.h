#ifndef DECEPTICON_H
#define DECEPTICON_H

#include "transformer.h"

class Decepticon : public Transformer {
public:
    Decepticon(const std::string& name) : Transformer(name, "Decepticon") {}

    void transform() const {
        std::cout << "Decepticon " << name << " is transforming!" << std::endl;
    }

    void openFire() const {
        std::cout << "Decepticon " << name << " is opening fire!" << std::endl;
    }

    void ultimate() const {
        std::cout << "Decepticon " << name << " is using ultimate attack!" << std::endl;
    }

    friend std::ostream& operator<<(std::ostream& os, const Decepticon& decepticon) {
        os << static_cast<const Transformer&>(decepticon);
        return os;
    }
};

#endif
