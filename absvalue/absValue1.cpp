#include <cstdio>

int absolute_value (int input) {
  if (input >= 0) return input;
  return input * (-1);
}

int main() {
  int num = 100;
  printf("The absolute value of %d is %d", num, absolute_value(num));
}
