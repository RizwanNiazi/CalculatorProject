#pragma once

#include <string>
#include <stack>
#include <vector>
#include <optional>

// Represents a single arithmetic operation
struct Operation {
    char type; // '+', '-', '*', '/'
    int operand1;
    int operand2;
    int result;
};

// Calculator class handling operations, undo, and result functionalities
class Calculator {
public:
    // Performs the specified arithmetic operation
    void performOperation(const std::string& expression);

    // Undo the last n operations
    void undoLastOperations(int n);

    // Returns the result of the last requested operation
    std::optional<int> getLastResult() const;

private:
    std::stack<Operation> operationHistory;
    std::stack<Operation> undoneOperations;
};
