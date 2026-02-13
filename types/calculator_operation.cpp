#include <cstdio>
#include <string>

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

std::string printEnum(Operation op){
  switch (op) {
    case Operation::Add:{
      std::string st ="Add";
      return st;
      break;
    }
    case Operation::Subtract:{
      std::string st ="Subtract";
      return st;
      break;
    }
    case Operation::Multiply:{
      std::string st ="Multiply";
      return st;
      break;
    }
    default:
      std::string st ="Divide";
      return st;
      break;
  }
}

int main () {
  Operation op {Operation::Divide};
  Calculator calc{op};
  int a{10};
  int b{5};
  Calculator calc_add {Operation::Add};
  printf("The operation %s on %d and %d is %d\n",printEnum(op).c_str(),a,b,calc.calculate(a,b));
  printf("The operation %s on %d and %d is %d\n",printEnum(Operation::Add).c_str(),a,b,calc_add.calculate(a,b));
  return 0;
}
