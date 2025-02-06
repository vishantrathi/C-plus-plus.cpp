//Everything is same as set 
//only store dublicate elements also
#include<iostream>
#include<multiset>
using namespace std;
int main(){
    multiset<int>ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.erase(1);
    
}