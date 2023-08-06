#include <iostream>

int main() {
    std::cout << "Enter an integer: ";

    int x{ };
    std::cin >> x; // store input in x

    std::cout << "Double of " << x << " is: " << x * 2 << "\n";

    return 0;
}
