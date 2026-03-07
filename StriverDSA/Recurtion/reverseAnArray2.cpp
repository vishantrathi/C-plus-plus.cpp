// q:  reverse an array with recurtion

#include<bits/stdc++.h>
using namespace std;

void revAnArr(int i,int arr[],int n){
    if(i>=n/2)return;
    swap(arr[i],arr[n-i-1]);
    revAnArr(i+1,arr,n);
}

int main(){
    int n=5;
    int arr[5]={1,2,3,4,5};
    revAnArr(0,arr,n);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}