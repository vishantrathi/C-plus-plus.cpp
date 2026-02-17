#include<iostream>
using namespace std;


void pattern15(int n){

    for(int i=1;i<=n;i++){
        //number
        for(char ch='A';ch<='A'+i;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }      
}

int main(){
    int n;
    cin>>n;
    pattern15(n);
}