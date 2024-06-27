#include "../include/Calculator.h"
#include <gtest/gtest.h>

TEST(CalculatorTests, BasicArithmetic) {
    Calculator calc;

    calc.performOperation("2 + 3");
    EXPECT_EQ(calc.getLastResult().value(), 5);

    calc.performOperation("5 - 1");
    EXPECT_EQ(calc.getLastResult().value(), 4);

    calc.performOperation("4 * 2");
    EXPECT_EQ(calc.getLastResult().value(), 8);

    calc.performOperation("8 / 2");
    EXPECT_EQ(calc.getLastResult().value(), 4);
}

TEST(CalculatorTests, UndoOperations) {
    Calculator calc;

    calc.performOperation("3 + 3");
    calc.performOperation("2 + 2");
    calc.undoLastOperations(1);
    EXPECT_EQ(calc.getLastResult().value(), 6);

    calc.undoLastOperations(1);
    EXPECT_EQ(calc.getLastResult(), std::nullopt);
}

TEST(CalculatorTests, DivisionByZero) {
    Calculator calc;
    EXPECT_THROW(calc.performOperation("4 / 0"), std::runtime_error);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
