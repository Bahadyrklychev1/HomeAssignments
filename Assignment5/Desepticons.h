#ifndef CLASS_DECEPTICONS_H
#define CLASS_DECEPTICONS_H

#include "Transformers.h"
#include <string>

class Desepticons : public Transformers {
public:
    Desepticons(uint health = 90, uint armor = 55, uint weapon = 15, uint power = 80, uint dangerLevel = 5, uint numberOfModel = 1, uint percentOfRecharge = 50);

    void transform() override {
        std::cout << "Transform method from Desepticons class" << std::endl;
    }

    void openFire() override {
        std::cout << "OpenFire method from Desepticons class" << std::endl;
    }

    void ulta() override {
        std::cout << "Ulta method from Desepticons class" << std::endl;
    }

    void setNumberOfModel(uint numberOfModel);
    uint getNumberOfModel() const;

    void setDangerLevel(uint dangerLevel);
    uint getDangerLevel() const;

    void setPercentOfRecharge(uint percentOfRecharge);
    uint getPercentOfRecharge() const;

    bool protect();

private:
    uint _dangerLevel;
    uint _numberOfModel;
    uint _percentOfRecharge;
};

#endif