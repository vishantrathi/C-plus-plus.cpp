#include <iostream>
#include <string>

bool isSingleLineComment(const std::string& line) {
    return line.find("//") != std::string::npos;
}

bool isMultiLineCommentStart(const std::string& line) {
    return line.find("/*") != std::string::npos;
}

bool isMultiLineCommentEnd(const std::string& line) {
    return line.find("*/") != std::string::npos;
}

int main() {
    std::string line1 = "// This is a single-line comment";
    std::string line2 = "/* This is a multiline comment start";
    std::string line3 = "This is inside a multiline comment */";
    std::string line4 = "int main() { return 0; }";

    std::cout << "Line 1: " << (isSingleLineComment(line1) ? "Single-line comment" : "Not a comment") << std::endl;
    std::cout << "Line 2: " << (isMultiLineCommentStart(line2) ? "Multiline comment start" : "Not a comment") << std::endl;
    std::cout << "Line 3: " << (isMultiLineCommentEnd(line3) ? "Multiline comment end" : "Not a comment") << std::endl;
    std::cout << "Line 4: " << (isSingleLineComment(line4) ? "Single-line comment" : "Not a comment") << std::endl;

    return 0;
}
