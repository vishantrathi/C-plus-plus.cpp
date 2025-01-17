#include <iostream>
#include <cctype> // For isalnum function

bool isValidString(const std::string& str) {
    for (char ch : str) {
        if (!isalnum(ch)) {
            return false; // If any character is not alphanumeric, return false
        }
    }
    return true; // All characters are alphanumeric
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::cin >> input;

    if (isValidString(input)) {
        std::cout << "The string is valid." << std::endl;
    } else {
        std::cout << "The string is not valid." << std::endl;
    }

    return 0;
}
