#include<iostream>
#include<list>
using namespace std;

int main(){
     list<int>l;
     list<int>n(5,200);
     
     n.push_front(100);
     n.push_back(300);
     cout<<n.size();
    for(int i:n){
        cout<<i<<endl;
     }
     
}