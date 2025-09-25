#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int>pq;
    pq.push(40);
    pq.push(20);
    pq.push(70);
    pq.push(60);
    pq.push(50);

    for(int i=0;i<pq.size();i++){
        cout<<pq.top()<<endl;
    }


}