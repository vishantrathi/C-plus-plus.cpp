#include<iostream>
using namespace std;
//set of code to do something
// void printName(){
//     cout<<"Hey Vishant";
// }
// int  main(){
//     printName();
// }

void printName(string name){
    cout<<"Hey "<<name;
}
int  main(){
    string name;
    cin>>name;
    printName(name);
}