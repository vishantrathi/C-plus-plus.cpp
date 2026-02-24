#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int,int>p1, pair<int,int>p2){
    if(p1.second<p2.second) return true;
    if(p1.second>p2.second) return false;
    if(p1.first>p2.first) return true;
    return false;
}

void sorting(){
     pair<int,int> a[]={{1,2},{2,1},{4,1}};
     int n=3;
    // sort(a,a+n);
    // sort(a+2,a+4);
    // sorting(starting iterator,ending iterator)

    // sort(a,a+n, greater<int>()) //sorted in dec order 
    sort(a, a+n, comp);
    cout<<"Sorted pairs:"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i].first<<" "<<a[i].second<<endl;
    }
    //sort it according to second element
    //if second element is same, then sort
    //it according to first element but in desending

 

    // Builtin popcount
    int num=7;
    cout<<"Set bits in 7: "<<__builtin_popcount(num)<<endl;
    long long numm= 12874768328;
    cout<<"Set bits in 7: "<<__builtin_popcount(numm)<<endl;


    // Next permutation
    string s="123";
    do{
        cout<<s<<endl;

    }while(next_permutation(s.begin(),s.end()));

    // max_element
    int arr[]={1,5,3,9};
    int maxi = *max_element(arr, arr+4);
    cout<<"Max element: "<<maxi<<endl;

    
}

int main(){
    sorting();
}