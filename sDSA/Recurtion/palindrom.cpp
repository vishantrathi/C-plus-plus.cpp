#include<bits/stdc++.h>
using namespace std;

bool palin(int i, string &s){ //the function does not copy the string (better performance).
    if(i>=s.size()/2) return true;
    if(s[i]!=s[s.size()-i-1]) return false;
    return palin(i+1,s);
}

int main(){
    string s="madam";
    cout<<palin(0,s);
    return 0;
    
}