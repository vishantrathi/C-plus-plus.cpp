#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float number1{1.12345678901234567890f};
    double number2{1.12345678901234567890};
    long double number3{1.12345678901234567890L};
    cout<<"size of float"<<sizeof(float)<<endl;
    cout<<"size of double"<<sizeof(double)<<endl;
    cout<<"size of long double"<<sizeof(long double)<<endl;

    cout<<setprecision(20); //control the presion
    cout<<"number 1 is:"<<number1<<endl;
    cout<<"number 2 is:"<<number2<<endl;
    cout<<"number 3 is:"<<number3<<endl;
    return 0;  
}