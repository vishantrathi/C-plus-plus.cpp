#include <iostream>
#include <string>

class CommentChecker {
public:
    std::string check(const std::string& line) {
        std::string trimmedLine = line;

        // Remove leading whitespace
        trimmedLine.erase(0, trimmedLine.find_first_not_of(" \t"));

        // Check for single-line comment
        if (trimmedLine.find("//") == 0) {
            return "Single-line comment";
        }

        // Check for multiline comment
        if (trimmedLine.find("/*") == 0 && trimmedLine.find("*/") != std::string::npos) {
            return "Multiline comment";
        }

        // Check for potential multiline comment (not complete)
        if (trimmedLine.find("/*") != std::string::npos && trimmedLine.find("*/") == std::string::npos) {
            return "Potential multiline comment (not complete)";
        }

        return "Not a comment";
    }
};

int main() {
    CommentChecker checker;
    std::string line;

    std::cout << "Enter a line of code (type 'exit' to quit):\n";

    while (true) {
        std::getline(std::cin, line);

        // Check for exit condition
        if (line == "exit") {
            break;
        }

        std::string result = checker.check(line);
        std::cout << "Line: " << line << "\nResult: " << result << "\n\n";
    }

    return 0;
}