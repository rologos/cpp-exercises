#include <cstdio>

int main () {
    int value[] = {10, 30, 100, 40, 50};
    int max = value[0];
    for (int x : value) {
        if (max < x) {
            max = x;
        }
    }
    printf("The max value is %d \n",max);
}
