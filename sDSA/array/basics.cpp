#include<bits/stdc++.h>
using namespace std;


// if array declared globally then it is max size of 10^7
// and in int main it is the max size of 10^6


int main(){
    int arr[]={1,2,3,4,5,6,7};
    
    for(int i=0;i<7;i++){
        cout<<arr[i]<<endl;
    }
}

// Fixed size (cannot change after declaration)

// Stored in contiguous memory

// Index starts from 0

// Faster access: O(1) time complexity