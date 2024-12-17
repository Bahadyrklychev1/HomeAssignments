//Клычев Баходир Исламбекович, группа 24.Б83-мм 
//Implementation of Transformer classes
#include "autobot.h"
#include "decepticon.h"
#include "maximal.h"
#include <gtest/gtest.h>

TEST(TransformerTest, AutobotTransform) {
    Autobot autobot("Optimus Prime", "Sword");
    testing::internal::CaptureStdout();
    autobot.transform();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Optimus Prime is transforming!\n");
}

TEST(TransformerTest, AutobotUseWeapon) {
    Autobot autobot("Optimus Prime", "Sword");
    testing::internal::CaptureStdout();
    autobot.useWeapon();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Using weapon: Sword\n");
}

TEST(TransformerTest, AutobotAssist) {
    Autobot autobot("Optimus Prime", "Sword");
    testing::internal::CaptureStdout();
    autobot.assist();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Optimus Prime is assisting!\n");
}

TEST(TransformerTest, DecepticonTransform) {
    Decepticon decepticon("Megatron", "Cannon");
    testing::internal::CaptureStdout();
    decepticon.transform();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Megatron is transforming!\n");
}

TEST(TransformerTest, DecepticonUseWeapon) {
    Decepticon decepticon("Megatron", "Cannon");
    testing::internal::CaptureStdout();
    decepticon.useWeapon();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Using weapon: Cannon\n");
}

TEST(TransformerTest, DecepticonSabotage) {
    Decepticon decepticon("Megatron", "Cannon");
    testing::internal::CaptureStdout();
    decepticon.sabotage();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Megatron is sabotaging!\n");
}

TEST(TransformerTest, MaximalTransform) {
    Maximal maximal("Optimus Primal");
    testing::internal::CaptureStdout();
    maximal.transform();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Optimus Primal is transforming!\n");
}

TEST(TransformerTest, ComparisonOperators) {
    Autobot autobot1("Optimus Prime", "Sword");
    Autobot autobot2("Bumblebee", "Blaster");
    EXPECT_TRUE(autobot1 > autobot2);
    EXPECT_FALSE(autobot1 < autobot2);
}

TEST(TransformerTest, OutputOperatorAutobot) {
    Autobot autobot("Optimus Prime", "Sword");
    testing::internal::CaptureStdout();
    std::cout << autobot;
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Name: Optimus Prime, Type: Autobot, Weapon: Sword");
}

TEST(TransformerTest, OutputOperatorDecepticon) {
    Decepticon decepticon("Megatron", "Cannon");
    testing::internal::CaptureStdout();
    std::cout << decepticon;
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Name: Megatron, Type: Decepticon, Weapon: Cannon");
}

TEST(TransformerTest, OutputOperatorMaximal) {
    Maximal maximal("Optimus Primal");
    testing::internal::CaptureStdout();
    std::cout << maximal;
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Name: Optimus Primal, Type: Maximal");
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
