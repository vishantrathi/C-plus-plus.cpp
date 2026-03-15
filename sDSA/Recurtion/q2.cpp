// print linearly from 1 to n using recurtion
#include<bits/stdc++.h>
using namespace std;

void linOneToN(int n){
    if(n==0) return;
        linOneToN(n-1);
        cout<<"the code"<<n<<endl;
}
int main(){
    int n;
    cin>>n;
    linOneToN(n);
}

