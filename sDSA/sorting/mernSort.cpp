#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int mid, int r){

    vector<int> temp;

    int left = l;
    int right = mid + 1;

    while(left <= mid && right <= r){

        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(left <= mid){
        temp.push_back(arr[left]);
        left++;
    }

    while(right <= r){
        temp.push_back(arr[right]);
        right++;
    }

    for(int i=l;i<=r;i++){
        arr[i] = temp[i-l];
    }
}

void mergeSort(int arr[], int l, int r){

    if(l >= r) return;

    int mid = (l + r) / 2;

    mergeSort(arr,l,mid);
    mergeSort(arr,mid+1,r);

    merge(arr,l,mid,r);
}

int main(){

    int arr[] = {5,3,8,4,2};
    int n = 5;

    mergeSort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}