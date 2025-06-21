#include <iostream>
using namespace std;

int main() {
    int a = 1;
    char b = 'A';  // implicit conversion from int to char
    int c = a + b;  // char 'b' is promoted to int before addition
    cout << "implicit typecasting = " << c << endl;

    // Explicit typecasting
    double pi = 3.14159;
    int rounded = static_cast<int>(pi);  // explicit conversion from double to int  
    cout << "Explicit: double to int: " << rounded << endl;
    return 0;
}