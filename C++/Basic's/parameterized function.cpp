#include <iostream>

// Function to return the sum of two numbers
int addNumbers(int a, int b) {
    return a + b;
}

int main() {
    int num1 = 3;
    int num2 = 5;

    // Call the function and store the result
    int result = addNumbers(num1, num2);

    // Print the result
    std::cout << "The sum of " << num1 << " and " << num2 << " is: " << result << std::endl;

    return 0;
}
