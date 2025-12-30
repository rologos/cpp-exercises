#include <cstdio>

enum class Operation {
  Add,
  Subtract,
  Multiply,
  Divide,
};

struct Calculator {

  Calculator (Operation op) {
    this->op = op;
  }
  int calculate (int a, int b){
    switch (op) {
      case Operation::Add:
        return a + b;
        break;
      case Operation::Subtract:
        return a - b;
        break;
      case Operation::Multiply:
        return a * b;
        break;
      default:
        return a / b;
        break;
    }
  }
  private:
    Operation op;
};

 void printEnum(Operation op){
  switch (op) {
    case Operation::Add:{
      printf("Add");
      break;
    }
    case Operation::Subtract:{
      printf("Subtract");
      break;
    }
    case Operation::Multiply:{
      printf("Multiply");
      break;
    }
    default:
      printf("Divide");
      break;
  }
}

int main () {
  Operation op {Operation::Divide};
  Calculator calc{op};
  int a{10};
  int b{5};
  printf("The operation of ");
  printEnum(op);
  printf(" on %d and %d is %d\n",a,b,calc.calculate(a,b));
  return 0;
}
