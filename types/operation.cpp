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

    void printEnum() const {
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

    int calculate (int x, int y) {
        switch (op) {
            case operation::Add:
                return x + y;
                break;
            case operation::Subtract:
                return x - y;
                break;
            case operation::Multiply:
                return x * y;
                break;
            default:
                return x / y;
                break;
        };
    }
};

int main() {

    calculator myCalculator = operation::Divide;
    myCalculator.printEnum();
    printf("This is the result of the calc: %d \n", myCalculator.calculate(14,2));
};
