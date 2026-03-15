#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>dq;
    dq.push_back(5);
    dq.emplace_back(2);
    dq.push_front(9);
    dq.emplace_front(4);

    for(int i:dq){
        cout<<i<<" ";
    }
    return 0;
}