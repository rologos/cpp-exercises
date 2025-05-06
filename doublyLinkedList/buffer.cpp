#include <cstdio>
#include <exception>

char read_from (char* pointer, size_t total, int index) {
    
    if ((index >=0) && (index <= total)) return pointer[index];
    return 1;
}

void write_to (char* pointer, size_t total, int index, char insert) {
    
    if ((index >=0) && (index <= total)) pointer[index] = insert;
}

int main () {
    char lower[] = "abc?e";
    char upper[] = "ABC?E";
    char* upper_ptr = upper;

    lower[3] = 'd';
    upper_ptr[3] = 'D';

    char letter_d = lower[3];
    char letter_D = upper_ptr[3];

    printf("lower: %s\nupper: %s\n", lower, upper );
    
    printf("read from result: %c\n", read_from(lower , sizeof(lower)/sizeof(char), 3));
    write_to(lower , sizeof(lower)/sizeof(char), 3,'^');

    printf("lower: %s\nupper: %s", lower, upper );

} 
