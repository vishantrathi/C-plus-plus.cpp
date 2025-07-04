#include<iostream>
using namespace std;
int main(){
    //Pattern 1

    // int n;
    // cin>>n;
    
    // int i=1;
    // while(i<=n){
    //     int j =1;
    //     while(j<=n){
    //         cout<<""<<i; 
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }

    //Pattern 2
    // int n;
    // cin>>n;
    // int i=1;
    // while(i<=n){
    //    int j=1;
    //    while(j<=n){
    //     // cout<<i;  //output:1234
    //     cout<<n-j+1; //output:4321
    //     j=j+1;
    //    }
    //    cout<<endl;
    //    i=i+1;
    // }

    //Pattern 3
    int n;
    cin>>n;

    int i=1;
    int count =1;
    while (i<=n){
        int j=1;
        while (j<=n){
            cout<<count;
            count=count+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    
}