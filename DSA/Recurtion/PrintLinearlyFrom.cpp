#include<bits/stdc++.h>
using namespace std;

void printlinearly(int i, int n) {
    if (i < 1) { 
        return;
    }
    printlinearly(i - 1, n); 
    cout << i << " "<<endl; 
}

int main() {
    int n;
    cin >> n;
    printlinearly(n - 1, n); 
    return 0;
}
