#include "../include/Calculator.h"
#include <iostream>
#include <string>

int main() {
    Calculator calc;
    std::string input;

    std::cout << "Enter operation (e.g., 2 + 3) or command (undo n, result): ";

    while (std::getline(std::cin, input)) {
        if (input.find("undo") == 0) {
            int n;
            sscanf(input.c_str(), "undo %d", &n);
            calc.undoLastOperations(n);
        } else if (input == "result") {
            auto result = calc.getLastResult();
            if (result.has_value()) {
                std::cout << "Last result: " << result.value() << std::endl;
            } else {
                std::cout << "No result available." << std::endl;
            }
        } else {
            try {
                calc.performOperation(input);
            } catch (const std::exception& ex) {
                std::cerr << "Error: " << ex.what() << std::endl;
            }
        }

        std::cout << "Enter operation (e.g., 2 + 3) or command (undo n, result): ";
    }

    return 0;
}
