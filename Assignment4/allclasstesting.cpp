#include <gtest/gtest.h>
#include "Transformers.h"
#include "Autobots.h"
#include "Desepticons.h"
#include "MiniRobots.h"

// Тесты для класса Transformers
TEST(TransformersTest, ConstructorAndGetters) {
    Transformers t(120, 80, 15, 90);

    EXPECT_EQ(t.getHealth(), 120);
    EXPECT_EQ(t.getArmor(), 80);
    EXPECT_EQ(t.getWeapon(), 15);
    EXPECT_EQ(t.getPower(), 90);
}

TEST(TransformersTest, Setters) {
    Transformers t;

    t.setHealth(200);
    t.setArmor(100);
    t.setWeapon(20);
    t.setPower(150);

    EXPECT_EQ(t.getHealth(), 200);
    EXPECT_EQ(t.getArmor(), 100);
    EXPECT_EQ(t.getWeapon(), 20);
    EXPECT_EQ(t.getPower(), 150);
}

TEST(TransformersTest, Methods) {
    Transformers t;

    EXPECT_TRUE(t.motion());
    EXPECT_TRUE(t.jump());
    EXPECT_TRUE(t.attack());
}

TEST(TransformersTest, OutputOperator) {
    Transformers t(120, 80, 15, 90);
    std::stringstream ss;
    ss << t;
    EXPECT_EQ(ss.str(), "Health: 120, Armor: 80, Weapon: 15, Power: 90");
}

TEST(TransformersTest, ComparisonOperators) {
    Transformers t1(100, 50, 10, 75);
    Transformers t2(120, 60, 15, 90);
    EXPECT_TRUE(t2 > t1);
    EXPECT_FALSE(t1 == t2);
}

TEST(TransformersTest, OverloadedConstructors) {
    Transformers t1(150, 70, 20, 75); // Используем перегруженный конструктор с четырьмя параметрами
    EXPECT_EQ(t1.getHealth(), 150);
    EXPECT_EQ(t1.getArmor(), 70);
    EXPECT_EQ(t1.getWeapon(), 20);
    EXPECT_EQ(t1.getPower(), 75);

    Transformers t2(200); // Используем перегруженный конструктор с другим типом параметра
    EXPECT_EQ(t2.getPower(), 200);
}

// Тесты для класса Autobots
TEST(AutobotsTest, ConstructorAndGetters) {
    Autobots a(150, 90, 25, 120, "Plasma Cannon");

    EXPECT_EQ(a.getHealth(), 150);
    EXPECT_EQ(a.getArmor(), 90);
    EXPECT_EQ(a.getWeapon(), 25);
    EXPECT_EQ(a.getPower(), 120);
    EXPECT_EQ(a.getWeaponType(), "Plasma Cannon");
}

TEST(AutobotsTest, Setters) {
    Autobots a;
    a.setWeaponType("Laser Blaster");
    a.setSkillLevel(10);
    a.setSizeOfInventory(100);

    EXPECT_EQ(a.getWeaponType(), "Laser Blaster");
    EXPECT_EQ(a.getSkillLevel(), 10);
    EXPECT_EQ(a.getSizeOfInventory(), 100);
}

TEST(AutobotsTest, Methods) {
    Autobots a;
    EXPECT_TRUE(a.motion());
    EXPECT_TRUE(a.jump());
    EXPECT_TRUE(a.attack());
}

TEST(AutobotsTest, OutputOperator) {
    Autobots a(150, 90, 25, 120, "Plasma Cannon");
    std::stringstream ss;
    ss << a;
    EXPECT_EQ(ss.str(), "Health: 150, Armor: 90, Weapon: 25, Power: 120, Weapon Type: Plasma Cannon, Skill Level: 3, Inventory Size: 10");
}

TEST(AutobotsTest, ComparisonOperators) {
    Autobots a1(100, 50, 10, 75);
    Autobots a2(120, 60, 15, 90);
    EXPECT_TRUE(a2 > a1);
    EXPECT_FALSE(a1 == a2);
}

TEST(AutobotsTest, OverloadedConstructors) {
    Autobots a1("Laser Blaster"); // Используем перегруженный конструктор с другим типом параметра
    EXPECT_EQ(a1.getWeaponType(), "Laser Blaster");

    Autobots a2(5); // Используем перегруженный конструктор с другим типом параметра
    EXPECT_EQ(a2.getSkillLevel(), 5);
}

// Тесты для класса Desepticons
TEST(DesepticonsTest, ConstructorAndGetters) {
    Desepticons d(130, 85, 30, 110, 5);

    EXPECT_EQ(d.getHealth(), 130);
    EXPECT_EQ(d.getArmor(), 85);
    EXPECT_EQ(d.getWeapon(), 30);
    EXPECT_EQ(d.getPower(), 110);
    EXPECT_EQ(d.getDangerLevel(), 5);
}

TEST(DesepticonsTest, Setters) {
    Desepticons d;
    d.setDangerLevel(10);
    d.setNumberOfModel(3);
    d.setPercentOfRecharge(55);

    EXPECT_EQ(d.getDangerLevel(), 10);
    EXPECT_EQ(d.getNumberOfModel(), 3);
    EXPECT_EQ(d.getPercentOfRecharge(), 55);
}

TEST(DesepticonsTest, Methods) {
    Desepticons d;
    EXPECT_TRUE(d.motion());
    EXPECT_TRUE(d.jump());
    EXPECT_TRUE(d.attack());
}

TEST(DesepticonsTest, OutputOperator) {
    Desepticons d(130, 85, 30, 110, 5);
    std::stringstream ss;
    ss << d;
    EXPECT_EQ(ss.str(), "Health: 130, Armor: 85, Weapon: 30, Power: 110, Danger Level: 5, Number of Model: 1, Percent of Recharge: 50");
}

TEST(DesepticonsTest, ComparisonOperators) {
    Desepticons d1(100, 50, 10, 75);
    Desepticons d2(120, 60, 15, 90);
    EXPECT_TRUE(d2 > d1);
    EXPECT_FALSE(d1 == d2);
}

TEST(DesepticonsTest, OverloadedConstructors) {
    Desepticons d1(10, 3, 50); // Используем перегруженный конструктор с другим типом параметров
    EXPECT_EQ(d1.getDangerLevel(), 10);
    EXPECT_EQ(d1.getNumberOfModel(), 3);
    EXPECT_EQ(d1.getPercentOfRecharge(), 50);

    Desepticons d2(7); // Используем перегруженный конструктор с другим типом параметра
    EXPECT_EQ(d2.getDangerLevel(), 7);
}

// Тесты для класса MiniRobots
TEST(MiniRobotsTest, ConstructorAndGetters) {
    MiniRobots m(80, 40, 10, 60, "Small");

    EXPECT_EQ(m.getHealth(), 80);
    EXPECT_EQ(m.getArmor(), 40);
    EXPECT_EQ(m.getWeapon(), 10);
    EXPECT_EQ(m.getPower(), 60);
    EXPECT_EQ(m.getSize(), "Small");
}

TEST(MiniRobotsTest, Setters) {
    MiniRobots m;
    m.setSize("Big");
    m.setHeight(200);
    m.setAttackZone(3);

    EXPECT_EQ(m.getSize(), "Big");
    EXPECT_EQ(m.getHeight(), 200);
    EXPECT_EQ(m.getAttackZone(), 3);
}

TEST(MiniRobotsTest, Methods) {
    MiniRobots m;
    EXPECT_TRUE(m.motion());
    EXPECT_TRUE(m.jump());
    EXPECT_TRUE(m.attack());
}

TEST(MiniRobotsTest, OutputOperator) {
    MiniRobots m(80, 40, 10, 60, "Small");
    std::stringstream ss;
    ss << m;
    EXPECT_EQ(ss.str(), "Health: 80, Armor: 40, Weapon: 10, Power: 60, Size: Small, Height: 30, Attack Zone: 2");
}

TEST(MiniRobotsTest, ComparisonOperators) {
    MiniRobots m1(80, 40, 10, 60);
    MiniRobots m2(100, 50, 15, 80);
    EXPECT_TRUE(m2 > m1);
    EXPECT_FALSE(m1 == m2);
}

TEST(MiniRobotsTest, OverloadedConstructors) {
    MiniRobots m1("Big"); // Используем перегруженный конструктор с другим типом параметра
    EXPECT_EQ(m1.getSize(), "Big");

    MiniRobots m2(200); // Используем перегруженный конструктор с другим типом параметра
    EXPECT_EQ(m2.getHeight(), 200);
}

// Тесты для наследования
TEST(InheritanceTest, InheritedMethods) {
    Autobots a;
    Desepticons d;
    MiniRobots m;

    EXPECT_TRUE(a.motion());
    EXPECT_TRUE(d.motion());
    EXPECT_TRUE(m.motion());

    EXPECT_TRUE(a.jump());
    EXPECT_TRUE(d.jump());
    EXPECT_TRUE(m.jump());
}