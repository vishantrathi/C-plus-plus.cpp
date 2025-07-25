#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value to Check wheather it is prime or not"<<endl;
    cin>>n;
    bool isprime=1;

    for(int i=2;i<n;i++){
        if (n%i==0){
            isprime=0;
            break;
        }
    }
    if(isprime==0){
        cout<<"Not a Prime no"<<endl;

    }
    else{
        cout<<"Is a prime no"<<endl;
    }
}

