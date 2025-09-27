#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;


    v.push_back(1);
    v.push_back(3);
    v.push_back(7);
    v.push_back(2);
    sort(v.begin(), v.end());


    cout<<"Finding 6 --> "<<binary_search(v.begin(),v.end(),6)<<endl;
    cout<<"Lower Bound--"<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout<<"Upper Bound--"<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;

    int a=1;
    int b=3;
    cout<<"Max--"<<max(a,b);
    cout<<"Min--"<<min(a,b);
    swap(a,b);


    return 0;



}