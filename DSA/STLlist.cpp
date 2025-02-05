#include<iostream>
#include<vector>
int main(){
    list<int>ls;
    ls.push_back(2);
    ls.emplace_back(4);
    ls.push_front(5);
    ls.emplace_fromt(7);
    cout<<ls;


}