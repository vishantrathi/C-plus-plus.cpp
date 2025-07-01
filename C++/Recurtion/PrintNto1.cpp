#include<bits/stdc++.h>
using namespace std;

void printlinearly(int i) {
    if (i < 1) {
        return; 
    }
    cout << i << " "; 
    printlinearly(i - 1); 
}

int main() {
    int n;
    cin >> n; 
    printlinearly(n); 
}
