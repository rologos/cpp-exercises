#include <iostream>
#include <string>
#include <sstream>
#include <optional>

unsigned some_const_number() {
    return 42;
}

std::optional<int> read_number(std::istream& in) {
    int result{};
    if (in >> result) {
        return result;
    }
    in.clear();
    in.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    return {};
}

void guess_number_or_give_up (int number) {
    std::cout << "Guess the number.\n>";
    std::optional<int> guess;
    while ((guess = read_number(std::cin))) {

        if (guess.value() == number) {
            std::cout << "Well done.";
            return;
        }
        std::cout << guess.value() <<" is wrong. Try again\n>";
    }
    std::cout << "The number was " << number << "\n>";
}

int main() {
    guess_number_or_give_up( some_const_number());
}
