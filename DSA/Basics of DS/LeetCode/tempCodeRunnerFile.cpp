#include<iostream>
using namespace std;


int firstOcc(int arr[],int n,int key){
    int start =0;
    int end=n-1;
    int ans = -1;
    int mid =start+(end-start)/2;

    while(start<=end){

        if (arr[mid]==key){
            ans =mid;
            end=mid-1;

        }
        else if(key>arr[mid]){ //right mai jao
            start=mid+1;

        }
        else if(key<arr[mid]){
            end=mid-1;

        }
       
    }
    return ans;

}

int main(){
    int arr[5]={1,2,3,4,5};
    cout<<firstOcc(arr,5,3)<<endl;
    return 0;
}