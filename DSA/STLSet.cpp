#include<iostream>
#include<set>
using namespace std;
int main(){
    //sorted and unique
    set<int>st;
    if(st.empty()){
        cout<<"SET IS EMPTY"<<endl;
    }
    st.insert(11);
    st.emplace(255);
    st.insert(2);
    st.insert(2);//don't store dublicate value
    st.insert(49);
    st.insert(49);
    for (const auto& elem : st) {
        cout << elem << " "<<endl;
    }
    cout << endl;

    return 0;
}
