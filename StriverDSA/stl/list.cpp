#include<bits/stdc++.h>
using namespace std;

void explist(){
    list<int>l; // same way as declaration of vector
    l.push_back(1); //1
    l.emplace_back(2);//1 2
    l.push_front(3);//3 1 2
    l.emplace_front(4);//4 3 1 2

    for(auto y:l){
        cout<<y<<" ";//4 3 1 2 
    }
    // rest fn same as vector
}
int main(){
    explist();
}