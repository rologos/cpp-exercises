#include <cstdio>

int sum_two_numbers(int x, int y) {

    return x + y;
}

int main () {
    int x = 2;
    int y = 2;
    printf("The sum of %d and %d is %d\n", x , y, sum_two_numbers(x , y));
    return 0;
}
