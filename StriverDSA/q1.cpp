#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter the age"<<endl;
    cin>>age;

    if(age>=1 && age<=10){
        cout<<"You are  age of  10 or less(child)";
    }if(age>11 && age<=19){
        cout<<"Your are age of 11 t0 19(teenager)";
    }else{
        cout<<"You are older than 20(Adult)";
    }
}