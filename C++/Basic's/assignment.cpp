/*after initialalize a value we can assign a new valure to it*/
#include<iostream>
using namespace std;
int main(){
    int var1{123}; // Declare and intitialize
    cout<<"var1 " <<var1<<endl;
    var1 = 55; //assign
    cout<<"var1 "<<var1<<endl;


    cout<<"-------------------"<<endl;
    
    
    double var2 {44.55};
    cout<<"var2 "<<var2<<endl;

    var2 = 99.99;
    cout<<"var2 "<<var2<<endl;
    return 0;
}