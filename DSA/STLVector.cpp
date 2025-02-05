#include<iostream>
#include<vector>
using namespace std;
    int main(){
    vector<int>v;
    v.push_back(1);
    v.emplace_back(2);

    

    for(int i:v){
        cout<<i<<" ";
    }
    return 0;
    }