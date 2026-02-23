#include<bits/stdc++.h>
using namespace std;

void expStack(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.emplace(6);
    st.emplace(5);

    st.pop();

    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
    cout<<st.empty()<<endl;

    //indexing is not allowed in stack



    
}

int main(){
    expStack();
}