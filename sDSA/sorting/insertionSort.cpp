#include<bits/stdc++.h>
using namespace std;

void insert(int arr[],int n){
    for(int i=0;i<=n;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp = arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
        }
    }

}

int main(){
    int arr[8]={1,4,2,8,6,9,7,0};
    int n=8;
    insert(arr,n); 

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}