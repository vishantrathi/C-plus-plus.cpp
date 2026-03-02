//so the question is print the name five times using recurtion
#include<bits/stdc++.h>
using namespace std;

void printname(int i, int n ){
    if(i==n) return;
    cout<<"vishant"<<" "<<i<<endl;
    printname(i+1,n);
    n++; 
}

int main(){
    int i=0;
    int n;
    cin>>n;
    printname(i,n);
    return 0;
}