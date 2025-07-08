#include <iostream>

int main() {
    int* ptr = new int(5); // Allocate memory
    delete ptr; // Deallocate memory

    // Accessing the memory location pointed by the dangling pointer
    std::cout << *ptr << std::endl;

    return 0;
}  