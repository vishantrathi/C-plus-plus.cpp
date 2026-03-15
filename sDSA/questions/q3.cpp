#include<iostream>
using namespace std;

void sumNum(int num1,int num2){
    int num3;
    num3=num1+num2;
    cout<<num3;
}

int main(){
    int num1,num2;
    cin>>num1;
    cin>>num2;

    sumNum(num1,num2);
}