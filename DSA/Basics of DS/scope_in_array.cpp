#include<iostream>
using namespace std;

void update(int arr[],int n){
    cout<<"Inside the function"<<endl;
    arr[0]=12;

    for(int i=0;i<3;i++){
        cout<<arr[i]<<" "<<endl;
    }
    cout<<"Going back the function"<<endl;
}

int main(){
    int  arr[3]={2,6,7};
    update(arr,3);
    cout<<"Print the main funtion"<<endl;
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" "<<endl;
    }
}