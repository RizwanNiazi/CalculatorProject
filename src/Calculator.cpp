#include "../include/Calculator.h"
#include <stdexcept>
#include <sstream>
#include <iostream>

void Calculator::performOperation(const std::string& expression) {
    std::istringstream iss(expression);
    int operand1, operand2;
    char op;

    iss >> operand1 >> op >> operand2;

    int result = 0;

    switch (op) {
        case '+': result = operand1 + operand2; break;
        case '-': result = operand1 - operand2; break;
        case '*': result = operand1 * operand2; break;
        case '/':
            if (operand2 == 0) throw std::runtime_error("Division by zero");
            result = operand1 / operand2; 
            break;
        default: throw std::invalid_argument("Unsupported operation");
    }

    operationHistory.push({op, operand1, operand2, result});
    // Clear the undone operations stack when a new operation is performed
    while (!undoneOperations.empty()) undoneOperations.pop();
}

void Calculator::undoLastOperations(int n) {
    while (n-- > 0 && !operationHistory.empty()) {
        undoneOperations.push(operationHistory.top());
        operationHistory.pop();
    }
}

std::optional<int> Calculator::getLastResult() const {
    if (!operationHistory.empty()) {
        return operationHistory.top().result;
    }
    return std::nullopt;
}
