#include <iostream>
#include <functional>

int main() {
    std::cout << std::plus<int>{}(1.23,1) << std::endl; 
    std::cout << std::plus<>{}(1.23,1) << std::endl;
}
