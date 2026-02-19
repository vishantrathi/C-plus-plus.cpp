#include <bits/stdc++.h>
using namespace std;

//does not return anything
void print(){
    cout<<"raj"<<endl;
}

int sum(int a, int b){
    return a+b;
}



void explainPair(){
    pair<int,int>p={1,3};

    cout<<p.first<<" "<<p.second<<endl;  
}

void pairIn(){
    pair<int,pair<int,int>>p={1,{2,3}};
    cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<endl;
}

int main(){
    int s=sum(1,5);
    print();
    explainPair();
    pairIn();
    cout<<s;
}

