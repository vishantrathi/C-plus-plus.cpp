#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.emplace(3);
    st.emplace(4);
    cout<<st.top() <<endl;
    st.pop();
    cout<<st.top()<<" NewStack"<<endl;
    cout<<st.size()<<" Bytes"<<endl;    
    cout<<st.empty();    

    }
