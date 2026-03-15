// C++ Program to reverse string using
// std::reverse() method
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "Hello World";

    // Using reverse() function to reverse s
    reverse(s.begin(), s.end());

    cout << s;
    return 0;
}