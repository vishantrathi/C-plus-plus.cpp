#include<bits/stdc++.h>
using namespace std;
int main()
{
    int age;
    cout<<"Enter the age"<<endl;
    cin>>age;
    if(age<18){
        cout<<"you are not eligible for job ";
    }
    else if(age>=18 && age<=54)
    cout<<"You are eligible for job"; 
    return 0;
}