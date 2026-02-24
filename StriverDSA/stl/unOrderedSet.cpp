//it has randomise set
//the lower_bond and upper_bond fun are not work
//no indexing


#include<bits/stdc++.h>
using namespace std;

//Stores unique elements
//Does NOT store in sorted order
//Uses Hash Table

void UnOrderedSet(){
    // unordered_set<int>us;
    unordered_set<int> us = {10,20,30};
    us.insert(1);
    us.insert(2);
    us.insert(3);
    us.insert(5);
    us.insert(5);// does not store dublicate

    us.erase(2);

    for(auto x:us){
        cout<<x<<" ";
    }
}

//note
//set → when order matters
//unordered_set → when only fast lookup matters

int main(){
    UnOrderedSet();
}

