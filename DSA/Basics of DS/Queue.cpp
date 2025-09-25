#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<string>q;

    q.push("hati");
    q.push("ghoda");
    q.push("kutta");

    cout << q.front() << endl; 
    q.pop();                
    cout << q.front() << endl;
}
