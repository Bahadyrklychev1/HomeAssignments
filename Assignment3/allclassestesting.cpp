#include <gtest/gtest.h>
#include "Transformers.h"
#include "Autobots.h"
#include "Desepticons.h"
#include "MiniRobots.h"

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
