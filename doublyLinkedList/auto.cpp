#include <cstdio>

int main() {
    auto original {100};
    auto& original_ref{original};

    printf("original: %d\n", original);
    printf("reference: %d\n", original_ref);

    auto new_value = 200;
    original_ref = new_value;

    printf("original: %d\n", original);
    printf("original: %d\n", new_value);
    printf("reference: %d\n", original_ref);
}
