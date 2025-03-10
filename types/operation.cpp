#include <cstdio>
#include <iostream>
enum class operation {

    Add,
    Subtract,
    Multiply,
    Divide

};

int main () {

    operation blah= operation::Divide;
    printf("This is an enum: %d \n", static_cast<int>( blah));

};
