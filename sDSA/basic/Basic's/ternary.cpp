#include<iostream>
using namespace std;
int main()
{
    int max{};
    int a{35};
    int b{40};
    cout<<"using regular if"<<endl;
    if(a>b){
    max = a;
}else{
    max = b;
}
cout<<"max "<<max<<endl;
cout<<"---------------------------"<<endl;
cout<<"Using Ternary"<<endl;
max = (a>b)?a:b;
cout<<"max using ternary "<<max<<endl;
return 0;
}