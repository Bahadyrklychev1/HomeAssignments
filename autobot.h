#ifndef AUTOBOT_H
#define AUTOBOT_H

#include "transformer.h"

class Autobot : public Transformer {
public:
    Autobot(const std::string& name) : Transformer(name, "Autobot") {}

    void transform() const {
        std::cout << "Autobot " << name << " is transforming!" << std::endl;
    }

    void openFire() const {
        std::cout << "Autobot " << name << " is opening fire!" << std::endl;
    }

    void ultimate() const {
        std::cout << "Autobot " << name << " is using ultimate attack!" << std::endl;
    }

    friend std::ostream& operator<<(std::ostream& os, const Autobot& autobot) {
        os << static_cast<const Transformer&>(autobot);
        return os;
    }
};

#endif 
