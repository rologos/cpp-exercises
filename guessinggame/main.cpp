#include <iostream>

unsigned some_const_number() {
    return 42;
}

unsigned input () {
    unsigned number;
    while (!(std::cin >> number)) {
        std::cin.clear();
        std::cin.ignore(
            std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Please enter a number.\n>";
    }
}

int main()
{
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
