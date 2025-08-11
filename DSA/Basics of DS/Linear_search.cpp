#include<iostream>
using namespace std;

bool search(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}

 int main(){
    int arr[10]={5,2,7,6,8,9,1,3,-6};
    //whether key is present or not
    cout<<"Enter the element to the search"<<endl;
    int key;
    cin>>key;

    bool found =search(arr,10,key);
    if(found){
        cout<<"Key is Present"<<endl;
    }
    else{
        cout<<"Key is absent"<<endl;
    }
    return 0;
}