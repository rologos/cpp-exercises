#include <cstdio>

enum class Operation {
  Add,
  Subtract,
  Multiply,
  Divide,
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
  Operation op{ Operation::Divide};
  printf("This operation is to ");
  printEnum(op);
  printf("\n");
  return 0;
}
