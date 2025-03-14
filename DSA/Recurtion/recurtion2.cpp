#include<iostream>
using namespace std;

void print() {
    while (true) {  // Infinite loop
        cout << 1 << endl;
    }
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    print(); // Call the function with the infinite loop
    return 0;
}   