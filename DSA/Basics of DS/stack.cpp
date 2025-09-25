#include <iostream>
#include <stack>
using namespace std;

int main() {
    // Last in First Out
    // Example: Stack of plates

    stack<string> s;
    s.push("hati");
    s.push("ghoda");
    s.push("kutta");

    cout << s.top() << endl; // Prints "hati"
    s.pop();                 // Removes "hati"
    cout << s.top() << endl; // Prints "ghoda"
}
