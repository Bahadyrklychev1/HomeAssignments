#ifndef CLASS_DECEPTICONS_H
#define CLASS_DECEPTICONS_H

#include "Transformers.h"
#include <string>

class Desepticons : public Transformers {
public:
    Desepticons(uint health = 90, uint armor = 55, uint weapon = 15, uint power = 80, uint dangerLevel = 5, uint numberOfModel = 1, uint percentOfRecharge = 50);
    Desepticons(int dangerLevel, int numberOfModel, int percentOfRecharge); // Перегруженный конструктор с другим типом параметров
    Desepticons(int dangerLevel); // Перегруженный конструктор с другим типом параметра

    bool transform();

    void setNumberOfModel(uint numberOfModel);
    uint getNumberOfModel() const;

    void setDangerLevel(uint dangerLevel);
    uint getDangerLevel() const;

    void setPercentOfRecharge(uint percentOfRecharge);
    uint getPercentOfRecharge() const;

    bool protect();

    // Операторы сравнения
    bool operator>(const Desepticons& other) const;
    bool operator<(const Desepticons& other) const;
    bool operator==(const Desepticons& other) const;

    // Оператор вывода
    friend std::ostream& operator<<(std::ostream& os, const Desepticons& desepticon);

private:
    uint _dangerLevel;
    uint _numberOfModel;
    uint _percentOfRecharge;
};

#endif