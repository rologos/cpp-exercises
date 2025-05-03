#include <cstdio>

enum class Operation {

    Add,
    Subtract,
    Multiply,
    Divide
};

struct Calculator {

private:
    Operation opp;

public:
    Calculator(Operation opp) : opp {opp} {}

    void calculate (int a, int b){

        switch (opp) {

            case Operation::Add: {
                printf("Enum is add, result of %d and %d is %d\n", a , b, a + b );
                break;
            }
            case Operation::Subtract: {
                printf("Enum is Subtract result of %d minus %d is %d\n", a,b, a - b);
                break;
            }
            case Operation::Multiply: {
                printf("Enum is Multiply, result of %d times %d is %d\n", a ,b ,a*b);
                break;
            }
            default: {
                printf("Enum is Divide, result of %d divided by %d is %d\n", a,b ,a/b);
            }
        }
    }
};

int main () {

    Calculator calc1 {Operation::Multiply};

    calc1.calculate(1,2);

    Calculator calc2 {Operation::Add};

    calc2.calculate(4,5);

    return 0;
}

