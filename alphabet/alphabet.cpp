#include <cstdio>

int main () {

    char alphabet[27];
    for (int i=0; i < 26; i++){
        alphabet[i] = i + 97;
    }

    printf("%s", alphabet);
}
