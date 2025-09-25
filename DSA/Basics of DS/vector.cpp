#include<iostream>
#include<vector>
#include<array>
using namespace std;
int main(){
    vector<int>v(5,1);
    v.push_back(1);
    cout<<v.capacity()<<endl;
    v.push_back(2);
    cout<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"Total Element in Vector "<<v.capacity()<<endl;
    cout<<"Total Size of vector "<<v.size()<<endl;
    cout<<"Element at index "<<v.at(2)<<endl;

    cout<<"Front element "<<v.front()<<endl;
    cout<<"Back element "<<v.back()<<endl;
}