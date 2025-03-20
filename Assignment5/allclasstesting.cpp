#include <gtest/gtest.h>
#include "Transformers.h"
#include "Autobots.h"
#include "Desepticons.h"
#include "MiniRobots.h"
#include <vector>

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

TEST(TransformersTest, MotionAndAttack) {
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

TEST(AutobotsTest, ProtectMethod) {
    Autobots a(100, 50, 10, 75);
    EXPECT_TRUE(a.protect());

    Autobots b(100, 50, 10, 40);
    EXPECT_FALSE(b.protect());
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

TEST(DesepticonsTest, ProtectMethod) {
    Desepticons d(100, 50, 10, 75);
    EXPECT_TRUE(d.protect());

    Desepticons b(40, 50, 10, 75);
    EXPECT_FALSE(b.protect());
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

TEST(MiniRobotsTest, ProtectMethod) {
    MiniRobots m(100, 40, 10, 75);
    EXPECT_TRUE(m.protect());

    MiniRobots b(100, 20, 10, 75);
    EXPECT_FALSE(b.protect());
}

TEST(VirtualMethodsTest, Transform) {
    Autobots a;
    Desepticons d;
    MiniRobots m;

    testing::internal::CaptureStdout();
    a.transform();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Transform method from Autobots class\n");

    testing::internal::CaptureStdout();
    d.transform();
    output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Transform method from Desepticons class\n");

    testing::internal::CaptureStdout();
    m.transform();
    output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Transform method from MiniRobots class\n");
}

TEST(VirtualMethodsTest, OpenFire) {
    Autobots a;
    Desepticons d;
    MiniRobots m;

    testing::internal::CaptureStdout();
    a.openFire();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "OpenFire method from Autobots class\n");

    testing::internal::CaptureStdout();
    d.openFire();
    output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "OpenFire method from Desepticons class\n");

    testing::internal::CaptureStdout();
    m.openFire();
    output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "OpenFire method from MiniRobots class\n");
}

TEST(VirtualMethodsTest, Ulta) {
    Autobots a;
    Desepticons d;
    MiniRobots m;

    testing::internal::CaptureStdout();
    a.ulta();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Ulta method from Autobots class\n");

    testing::internal::CaptureStdout();
    d.ulta();
    output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Ulta method from Desepticons class\n");

    testing::internal::CaptureStdout();
    m.ulta();
    output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Ulta method from MiniRobots class\n");
}

TEST(PolymorphismTest, PointerCall) {
    Transformers* t1 = new Autobots();
    Transformers* t2 = new Desepticons();
    Transformers* t3 = new MiniRobots();

    testing::internal::CaptureStdout();
    t1->transform();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Transform method from Autobots class\n");

    testing::internal::CaptureStdout();
    t2->openFire();
    output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "OpenFire method from Desepticons class\n");

    testing::internal::CaptureStdout();
    t3->ulta();
    output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Ulta method from MiniRobots class\n");

    delete t1;
    delete t2;
    delete t3;
}

TEST(VectorOfPointersTest, VirtualMethods) {
    std::vector<Transformers*> transformers;
    for (int i = 0; i < 3; ++i) {
        transformers.push_back(new Autobots());
        transformers.push_back(new Desepticons());
        transformers.push_back(new MiniRobots());
    }

    testing::internal::CaptureStdout();
    for (auto* t : transformers) {
        t->transform();
        t->openFire();
        t->ulta();
    }
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_TRUE(output.find("Transform method from Autobots class") != std::string::npos);
    EXPECT_TRUE(output.find("OpenFire method from Desepticons class") != std::string::npos);
    EXPECT_TRUE(output.find("Ulta method from MiniRobots class") != std::string::npos);

    for (auto* t : transformers) {
        delete t;
    }
}