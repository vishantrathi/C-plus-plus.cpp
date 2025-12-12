#include<iostream>
using namespace std;
int intrev(int n){
    int ans=0;
    while(n!=0){
        int digit=n%10;
        ans=ans*10+digit;
        n/=10;
    }
    return ans;
}

int main(){
    cout<<intrev(123);
}