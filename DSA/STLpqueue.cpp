#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int> pq;
    pq.push(16);
    pq.push(22);
    pq.push(13);
    pq.push(14);
    pq.emplace(23);
    cout<<pq.size()<<endl;
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
    pq.push(50);
    cout<<pq.top();
}