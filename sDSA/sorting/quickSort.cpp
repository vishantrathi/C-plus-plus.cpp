#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int low,int high){
    int pivot = arr[low];
    int i= low;
    int j= high;

    while(i<j){
        while(arr[i]<=pivot && i<=high-1){
            i++;
        }

        while(arr[j]>pivot && j>=low+1){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }

    swap(arr[low],arr[j]);
    return j;
}

void quickSort(int arr[], int low, int high){

    if(low < high){

        int pIndex = partition(arr, low, high);

        quickSort(arr, low, pIndex-1);
        quickSort(arr, pIndex+1, high);
    }
}


int main(){
    int arr[]={4,6,1,8,2,5,3,7};
    int n=8;

    quickSort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
