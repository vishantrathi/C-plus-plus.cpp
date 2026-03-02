#include<bits/stdc++.h>
using namespace std;

void linearv(int i,int n){
    if(i>n) return;
    cout<<i<<endl;
    linearv(i+1,n);

}

int main(){
    int n;
    cin>>n;
    linearv(1,n);
}