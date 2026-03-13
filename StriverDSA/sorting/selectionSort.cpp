#include<bits/stdc++.h>
using namespace std;


void sortt(int arr[],int n){

    for(int i=0;i<n-1;i++){
        int mini =i;
        for(int j=i+1;j<=n;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        int temp =arr[mini];
        arr[mini]=arr[i];
        arr[i]=temp;
    }

}

int main(){
    int arr[8]={1,4,2,8,6,9,7,0};
    int n=8;
    sortt(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}