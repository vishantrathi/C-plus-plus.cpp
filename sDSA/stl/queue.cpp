#include<bits/stdc++.h>
using namespace std;

void listl(){

    // this is max heap
    priority_queue<int>pq;

    pq.push(5);
    pq.push(8);
    pq.push(2);
    pq.push(1);

    // in priority queue the largest element is always on the top

    cout<<"The top Element is: "<<pq.top()<<endl;// 8
    pq.pop();
    cout<<"The top after pop the lat element is:"<<pq.top()<<endl;

    // while(!pq.empty()){
    //     cout<<pq.top()<<" ";
    //     pq.pop();
    // }


    // min heap

    priority_queue<int, vector<int>, greater<int>>pqq;
    pqq.push(5);
    pqq.push(8);
    pqq.push(2);
    pqq.push(3);

    cout<<pqq.top();//the minimum element is on the top
    

}



int main(){
    listl();
}


// push => logn
// top => o(1)
// pop => logn