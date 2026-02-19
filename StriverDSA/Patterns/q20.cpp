#include<iostream>
using namespace std;

void pattern(int n){

    // Upper part
    for(int i=0;i<n;i++){

        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }

        for(int j=0;j<2*i;j++){
            cout<<" ";
        }

        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }

        cout<<endl;
    }

    // Lower part
    for(int i=1;i<=n;i++){

        for(int j=1;j<=i;j++){
            cout<<"*";
        }

        for(int j=0;j<2*(n-i);j++){
            cout<<" ";
        }

        for(int j=1;j<=i;j++){
            cout<<"*";
        }

        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    pattern(n);
}

//r