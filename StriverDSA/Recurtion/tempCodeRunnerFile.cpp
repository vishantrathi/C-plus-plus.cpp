#include<bits/stdc++.h>
using namespace std;

void printname(int i, int n ){
    if(i<n) return;
    cout<<"vishant"<<" "<<n;
    printname(i+1,n);
}

int main(){
    int i=0;
    int n;
    cin>>n;
    printname(i,n);
}