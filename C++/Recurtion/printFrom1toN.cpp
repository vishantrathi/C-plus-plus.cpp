#include<bits/stdc++.h>10
using namespace std;

void printlinearly(int i) {
    if (i < 1) { 
        return;
    }
    printlinearly(i - 1); // Recursive call 
    cout << i << " ";    
}

int main() {
    int n;
    cin >> n;          
    printlinearly(n);  
    return 0;
}
