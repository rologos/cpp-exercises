#include <cstdio>

int sum (int num1, int num2) {
  return num1 + num2;
}

int main() {
  int input1 = 100;
  int input2 = 200;
  printf("The sum of %d + %d equals %d", input1,input2, sum(input1,input2));
}
