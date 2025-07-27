#include<iostream>
using namespace std;
int main() {
    int a,b;
    char op;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    cout<<"Enter the value of b"<<endl;
    cin>>b;
    cout<<"Enter the the operation"<<endl;
    cin>>op;

    switch(op) {
        case'+': cout<<(a+b);
        break;
        case'-': cout<<(a-b);
         break;
        case'%': cout<<(a%b);
         break;
        case'*': cout<<(a*b);
         break;
        case'/': cout<<(a/b);
        break;

        default:cout<<"Please Enter a valid operation"<<endl;
    }
}