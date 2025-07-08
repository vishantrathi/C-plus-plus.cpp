#include <iostream>
#include <cctype> // for isdigit function

bool isString(const std::string& input) {
    for (char ch : input) {
        if (std::isdigit(ch)) {
            return false; // If any character is a digit, it's not a valid string
        }
    }
    return true; // If no digits are found, it's a valid string
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    if (isString(input)) {
        std::cout << "The input is a valid string." << std::endl;
    } else {
        std::cout << "The input is not a valid string." << std::endl;
    }

    return 0;
}
