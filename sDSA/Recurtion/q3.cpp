
#include<bits/stdc++.h>
using namespace std;

int Sumofn(int n){
    if(n == 0) return 0;        
    return n + Sumofn(n-1);
}

int main(){
    int n;
    cin >> n;
    cout << Sumofn(n); 
}