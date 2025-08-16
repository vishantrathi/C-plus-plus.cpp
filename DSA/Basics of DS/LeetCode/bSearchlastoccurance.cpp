#include<iostream>
using namespace std;


int lastOcc(int arr[],int n,int key){
    int start =0;
    int end=n-1;
    int ans = -1;
    int mid =start+(end-start)/2;

    while(start<=end){
         int mid = start + (end - start) / 2; //mid har iteration pe update hoga

        if (arr[mid]==key){
            ans =mid;
            start=mid+1;

        }
        else if(key>arr[mid]){ //right mai jao
            start=mid+1;

        }
        else if(key<arr[mid]){// left mai jao
            end=mid-1;

        }
       
    }
    return ans;

}

int main(){
    int arr[6]={1,2,2,2,4,5};
    cout<<lastOcc(arr,5,2)<<endl;
    return 0;
}