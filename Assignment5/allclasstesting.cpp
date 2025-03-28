#include <gtest/gtest.h>
#include <iostream>
#include <vector>
#include <string>

class Transformer {
public:
    virtual ~Transformer() = default;
    virtual void transform() = 0;
    virtual void openFire() = 0;
    virtual void ultimateAttack() = 0;
    virtual std::string getName() const = 0;
};

class Autobot : public Transformer {
protected:
    std::string name;
public:
    Autobot(std::string name) : name(name) {}
    void transform() override {
        std::cout << "Autobot " << name << " is transforming!" << std::endl;
    }
    void openFire() override {
        std::cout << "Autobot " << name << " is opening fire!" << std::endl;
    }
    void ultimateAttack() override {
        std::cout << "Autobot " << name << " is using ultimate attack!" << std::endl;
    }
    std::string getName() const override {
        return name;
    }
};

class Decepticon : public Transformer {
protected:
    std::string name;
public:
    Decepticon(std::string name) : name(name) {}
    void transform() override {
        std::cout << "Decepticon " << name << " is transforming!" << std::endl;
    }
    void openFire() override {
        std::cout << "Decepticon " << name << " is opening fire!" << std::endl;
    }
    void ultimateAttack() override {
        std::cout << "Decepticon " << name << " is using ultimate attack!" << std::endl;
    }
    std::string getName() const override {
        return name;
    }
};

TEST(TransformerTest, TestTransformers) {
    std::vector<Transformer*> transformers = {
        new Autobot("Optimus Prime"),
        new Decepticon("Megatron"),
        new Autobot("Bumblebee"),
        new Autobot("Jazz"),
        new Autobot("Ironhide"),
        new Decepticon("Starscream"),
        new Decepticon("Soundwave"),
        new Decepticon("Shockwave"),
        new Autobot("Ratchet"),
        new Autobot("Wheeljack"),
        new Decepticon("Thundercracker")
    };

    for (auto* transformer : transformers) {
        transformer->transform();
        transformer->openFire();
        transformer->ultimateAttack();
    }

    for (auto* transformer : transformers) {
        delete transformer;
    }
}

TEST(AutobotsTest, ConstructorAndGetters) {
    Autobot optimus("Optimus Prime");
    EXPECT_EQ(optimus.getName(), "Optimus Prime");
}

TEST(DecepticonsTest, ConstructorAndGetters) {
    Decepticon megatron("Megatron");
    EXPECT_EQ(megatron.getName(), "Megatron");
}

TEST(VirtualMethodsTest, Transform) {
    Autobot optimus("Optimus Prime");
    testing::internal::CaptureStdout();
    optimus.transform();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Autobot Optimus Prime is transforming!\n");
}

TEST(VirtualMethodsTest, OpenFire) {
    Autobot optimus("Optimus Prime");
    testing::internal::CaptureStdout();
    optimus.openFire();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Autobot Optimus Prime is opening fire!\n");
}

TEST(VirtualMethodsTest, UltimateAttack) {
    Autobot optimus("Optimus Prime");
    testing::internal::CaptureStdout();
    optimus.ultimateAttack();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Autobot Optimus Prime is using ultimate attack!\n");
}

TEST(PolymorphismTest, PointerCall) {
    Transformer* optimus = new Autobot("Optimus Prime");
    testing::internal::CaptureStdout();
    optimus->transform();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Autobot Optimus Prime is transforming!\n");
    delete optimus;
}

TEST(VectorOfPointersTest, VirtualMethods) {
    std::vector<Transformer*> transformers = {
        new Autobot("Optimus Prime"),
        new Decepticon("Megatron"),
        new Autobot("Bumblebee"),
        new Autobot("Jazz"),
        new Autobot("Ironhide"),
        new Decepticon("Starscream"),
        new Decepticon("Soundwave"),
        new Decepticon("Shockwave"),
        new Autobot("Ratchet"),
        new Autobot("Wheeljack"),
        new Decepticon("Thundercracker")
    };

    testing::internal::CaptureStdout();
    for (auto* transformer : transformers) {
        transformer->transform();
        transformer->openFire();
        transformer->ultimateAttack();
    }
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_TRUE(output.find("Autobot Optimus Prime is transforming!") != std::string::npos);
    EXPECT_TRUE(output.find("Decepticon Megatron is opening fire!") != std::string::npos);

    for (auto* transformer : transformers) {
        delete transformer;
    }
}
