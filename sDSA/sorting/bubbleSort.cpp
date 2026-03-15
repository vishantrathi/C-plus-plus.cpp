#include<bits/stdc++.h>
using namespace std;

void bubble(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                int temp= arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

int main(){
    
    int arr[7]={3,4,2,7,1,9,6};
    int n=7;
    bubble(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}