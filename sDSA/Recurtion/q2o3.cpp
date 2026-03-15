#include<bits/stdc++.h>
using namespace std;

void ntoOne(int i,int n){
    if(i<=n){
        cout<<n<<endl;
        ntoOne(i,n-1);
    }
}

int main(){
    int n;
    cin>>n;
    ntoOne(1,n);
}