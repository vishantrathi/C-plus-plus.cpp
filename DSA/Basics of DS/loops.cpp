#include<iostream>
using namespace std;
int main(){
    // int a;
    // cin>>a;
    // if(a>0){
    //     cout<<"A is Greater"<< a;
    // }
    // else{
    //     cout<<"A is Lesser"<< a;
    // }
    // int a,b;
    // cin>>a;
    // cin>>b;
    // if(a>b){
    //     cout<<"a is the largest"<<endl;
    // }
    // if(b>a){
    //     cout<<"b is the largest"<<endl;
    // }
    // else{
    //     cout<<"Both are equal"<<endl;
    // }
    // int a;
    // cin>>a;
    // if(a>0){
    //     cout<<"The number is positive"<<endl;
    // }
    // else{
    //     if(a<0){
    //     cout<<"The number is negative"<<endl;
    // }
    // else{
    //     cout<<"The nunber is equal to zero"<<endl;
    // }
    char ch;
    ch='1';
    if(ch>='a' && ch<='z'){
        cout<<"It is Lowercase"<<endl;
    }
    else{
        if(ch>='A' && ch<='Z'){
        cout<<"It is Uppercase"<<endl;
    }
    else{
    cout<<"It is a numeric value"<<endl;
    }
}
}

