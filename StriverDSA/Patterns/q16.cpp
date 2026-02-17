#include<iostream>
using namespace std;


void pattern16(int n){

    for(int i=1;i<=n;i++){
        //number
        for(char ch='A';ch<='A'+(n-i-1);ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }      
}

int main(){
    int n;
    cin>>n;
    pattern16(n);
}