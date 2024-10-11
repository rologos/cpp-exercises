#include <iostream>
#include <vector>

void generate_triangle() {
    std::vector<int> data{ 1 };

    for (auto number : data) {
        std::cout << number << ' ';
    }
    std::cout << '\n';
}

std::vector<int> get_next_row(const std::vector<int> & last_row) {
    std::vector<int> next_row { 1 };
    if (last_row.empty()) {
        return next_row;
    }
    for (size_t idx = 0; idx + 1 < last_row.size(); ++idx) {
        next_row.emplace_back(last_row[idx] + last_row[idx + 1]);
    }
    next_row.emplace_back(1);
    return next_row;

int main() {
    generate_triangle();
}
