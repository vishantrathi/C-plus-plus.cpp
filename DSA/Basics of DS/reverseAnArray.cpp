#include<bits/stdc++.h>
using namespace std;

vector<int>reverse(vector<int>v){
    int s=0, e=v.size()-1;
    while(s<e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}

void print(vector<int>v){
    for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);

    vector<int>ans=reverse(v);
    print (ans);
    return 0;
}