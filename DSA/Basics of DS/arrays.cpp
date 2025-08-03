#include<iostream>
using namespace std;
//An array is a collection of elements of the same type placed in contiguous memory locations.
int getMax(int num[],int n){
    // int arr[]{1,2,3,4,5,6,7}; //print garbage value for left element which does not initialized.

//    for (int i = 0; i < 10; i++) {
//     cout << arr[i] << " ";
    
//    }
//    cout<<endl;
//    cout << arr[1] << " "<<endl; // print element at index 1;
//    cout << sizeof(arr)<<endl;

int size;
cin>>size;

int num[1000];
for(int i=0;i<size;i++){
    if(num[i]>max){
        max=num[i];
    }
    cin>>num[i];

}



}