
#include <gtest/gtest.h>
#include "Class1.h"
#include "Class2.h"
#include "Class3.h"
#include "template_class.h"

TEST(Class1, returns_true_for_positive_number) {
    Template_class<Class1> checker(5, {});
    EXPECT_TRUE(checker.foo());
}

TEST(Class1, return_false_for_negative_number) {
    Template_class<Class1> checker(-5, {});
    EXPECT_FALSE(checker.foo());
}

TEST(Class3, returns_true_when_number_is_negative_size) {
    Template_class<Class3> checker(-1, {1.0f});
    EXPECT_TRUE(checker.foo());
}

TEST(Class3, returns_false_when_number_is_not_negative_size) {
    Template_class<Class3> checker(1, {1.0f});
    EXPECT_FALSE(checker.foo());
}

TEST(Class2, returns_true_for_non_empty_vector) {
    Template_class<Class2> checker(0, {1.0f});
    EXPECT_TRUE(checker.foo());
}

TEST(Class2, returns_false_for_empty_vector) {
    Template_class<Class2> checker(0, {});
    EXPECT_FALSE(checker.foo());
}

TEST(Template_class, int_specialization_test) {
    Template_class<int> int_test(42, {1.0f});
    EXPECT_TRUE(int_test.foo());
}

TEST(Template_class, double_specialization_test) {
    Template_class<double> double_test(42, {1.0f});
    EXPECT_FALSE(double_test.foo());
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv); // Инициализация Google Test
    return RUN_ALL_TESTS(); // Запуск всех тестов
}
