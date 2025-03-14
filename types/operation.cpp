#include <cstdio>
#include <iostream>
enum class operation {

    Add,
    Subtract,
    Multiply,
    Divide

};

struct calculator {

operation op;

calculator(operation operationValue) : op (operationValue) {
};

void setOperation(operation operationValue) {
    op = operationValue;
};

operation getOperation() { return op; };

void printColor() const {
    switch (op) {
        case operation::Add:
            std::cout << "Color: Add" << std::endl;
            break;
        case operation::Subtract:
            std::cout << "Color: Subtract" << std::endl;
            break;
        case operation::Multiply:
            std::cout << "Color: Multiply" << std::endl;
            break;
        default:
            std::cout << "Color: Divide" << std::endl;
            break;
    };
};
};

int main() {

    calculator myCalculator = operation::Divide;
    myCalculator.printColor();
    myCalculator.setOperation(operation::Multiply);
    myCalculator.printColor();
    printf("This is an enum: %d \n", static_cast<int>(myCalculator.getOperation()));
};
