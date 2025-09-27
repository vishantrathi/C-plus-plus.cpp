#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,string>m;
    m[1]="hi";
    m[32]="there";
    m[2]="hello";

    m.insert({5,"bheem"});
    m.erase(1);

    cout<<"finding 13= "<<m.count(13)<<endl;

     for(auto i:m){
        cout<<i.first<<endl;
    }
}