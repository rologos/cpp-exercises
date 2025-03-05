#include <cstdio>
#include <stdlib.h>

int absolute_value (int x){
    if (x >= 0) return x;
    else return -x;
}

int main (int argc, char *argv[]) {
    int my_num = atoi(argv[1]);
    printf( "The absolute value of %d is %d.\n", my_num, absolute_value(my_num));
}
