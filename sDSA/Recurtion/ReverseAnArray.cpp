// q: rever se an array usingrecurtion

#include<bits/stdc++.h>
using namespace std;
void revarray(int l,int r, int arr[]){
     if(l>=r) return;
    swap(arr[l],arr[r]);
    revarray(l+1,r-1,arr);

}

    int main(){
        int arr[5]={1,2,3,4,5};
        int n=5;
        revarray(0,n-1,arr);
        for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    }