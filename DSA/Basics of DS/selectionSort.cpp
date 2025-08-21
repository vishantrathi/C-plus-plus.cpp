// Selection Sort is a comparison-based sorting algorithm. It sorts an array by repeatedly selecting the smallest (or largest) element from the unsorted portion and swapping it with the first unsorted element. This process continues until the entire array is sorted.

// First we find the smallest element and swap it with the first element. This way we get the smallest element at its correct position.
// Then we find the smallest among remaining elements (or second smallest) and swap it with the second element.
// We keep doing this until we get all elements moved to correct position.

#include<iostream>
using namespace std;

int getpivot(int arr[], int n){
    int s=0;
    int e=n-1;
    while(s<e){
         int mid=s+(e-s)/2;
        if(arr[mid]>=arr[0])
        {
            s=mid+1;
        }
        else{
            e=mid;

        }
    }
    return s;
}

int main(){
int arr[5]={8,10,17,1,3};
cout<<"pivot is "<<getpivot(arr,5)<<endl;
}

// Pivot element in a rotated sorted array

// A sorted array is rotated at some point.

// The pivot element is simply the smallest element in the rotated array.

// Its index is called the pivot index.