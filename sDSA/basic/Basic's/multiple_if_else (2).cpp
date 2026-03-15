#include<bits/stdc++.h>
using namespace std;
int main(){
    int marks;
    cin>>marks;
    if(marks<25){
        cout<<"F";
    }
    else if(marks<=44){
        cout<<"E";
    }
    else if(marks<=49){
        cout<<"F";
    }
    else if(marks<=79){
        cout<<"B";
    }
    else if(marks<=100){
        cout<<"A";
    }
    return 0;
    
}
