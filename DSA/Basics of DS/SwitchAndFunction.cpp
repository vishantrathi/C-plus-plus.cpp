#include<iostream>
using namespace std;
int main(){
    char ch ='d';
    cout<<endl;
    switch(ch){
        case 'A':
            cout<<"A is for Apple"<<endl;
            break;
        case 'B':
            cout<<"B is for Ball"<<endl;
            break; //used to exit the block
        case 'C':
            cout<<"C is for Cat"<<endl;
            break;  // iss se particulaar case execute kar do agar mil jaye toh break laga do
        default:  // execuated only if no case matched (optional)
            cout<<"I don't know anything"<<endl;
    }
}