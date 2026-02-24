#include<bits/stdc++.h>
using namespace std;

void st(){
    set<int>stt;
    stt.insert(1);
    stt.insert(2);
    stt.insert(3);
    stt.insert(4);

    // store sorted and unique elements

    auto it=stt.find(3);
    //erase by value
    stt.erase(5);

    int cnt =stt.count(1);
    cout<<"the count ( T=1 and F=0):"<<cnt<<endl;

    auto it0 =stt.find(3);
    stt.erase(it);

    auto it1=stt.find(2);
    auto it2=stt.find(4);

    stt.erase(it1,it2); //removes element in range , starting from 2 to 4


    auto iiit=stt.lower_bound(2); //first element ≥ 2 → 4
    auto iit=stt.upper_bound(3); //first element ≥ 3 → 4

    for(auto X:stt){
    cout<<X<<" ";
    }
    cout<<endl;

}

// multiset 
//store the dublicates also & sorted

void multisetexp(){
    multiset<int>ms;
    ms.insert(1);
    ms.insert(8);
    ms.insert(6);
    ms.insert(3);

    ms.erase(1); //This removes ALL occurrences of 1.

    int cnt = ms.count(1);
    ms.erase(ms.find(1)); 

    for(auto y:ms){
        cout<<y<<" ";
    }
}

int main(){
    st();
    multisetexp();
}