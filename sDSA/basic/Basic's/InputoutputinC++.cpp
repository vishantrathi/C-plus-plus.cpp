#include<iostream>
#include<string>//it used to store character and data
using namespace std;
int main(){
    /*In this lecture we are going to learn about input and output in a program

    Types of steam and their purpose
    1. cout = it is used to print data in consol(terminal)
    2. cin = reaading data from terminal
    3. cerr = printing error in consol
    4. clog = printing log message to the consol*/
    int age;
    string name;
    cout<<"Please enter your name"<<endl;
    cin>> name;
    cout<<"please enter your age"<<endl;
    cin>>age;
    cout<<"Hello"<<name<<"your age is"<<age<<endl;
    //In order to run this code please change the name to main.cpp of the file

}