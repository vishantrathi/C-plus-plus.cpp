//Using Recurtion Print Name N Times
#include<bits/stdc++.h>
using namespace std;

void printName(int i,int n){    // i > n, and if so, it stops further execution using return
    if(i>n){                   
    return;
}
cout<<"Vishant Rathi"<<endl;
printName(i+1,n);
}

int main(){
    int n;
    cin>>n;
    printName(1,n);
    return 0;
}