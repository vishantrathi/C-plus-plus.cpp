// #include<iostream>
// using namespace std;
//An array is a collection of elements of the same type placed in contiguous memory locations.

    // int arr[]{1,2,3,4,5,6,7}; //print garbage value for left element which does not initialized.

//    for (int i = 0; i < 10; i++) {
//     cout << arr[i] << " ";
    
//    }
//    cout<<endl;
//    cout << arr[1] << " "<<endl; // print element at index 1;
//    cout << sizeof(arr)<<endl;
#include<iostream>
#include<climits> // For INT_MIN and INT_MAX
using namespace std;

// int getMax(int num[], int n) {
//     int max = INT_MIN;
//     for(int i = 0; i < n; i++) {
//         if(num[i] > maxi) {
//             maxi = num[i];
//         }
//     }
//     return max;
// }

// int getMin(int num[], int n) {
//     int mini = INT_MAX;
//     for(int i = 0; i < n; i++) {
//         if(num[i] < min) {
//             min = num[i];
//         }
//     }
//     return min;
// }

// int main() {
//     int size;
//     cin >> size;
//     int num[1000];

//     for(int i = 0; i < size; i++) {
//         cin >> num[i];
//     }
//     cout << "Minimum value is " << getMin(num, size) << endl;
//     return 0;
// }
int getMax(int num[],int n){
    int max= INT_MIN;
for(int i=0;i<n;i++ ){
    if(num[i]>max){
        max=num[i];
    }
}
return max;
}

int getMin(int num[],int n){
    int min= INT_MAX;
for(int i=0;i<n;i++){
    if(num[i]<min){
        min=num[i];
    }
}
return min;
}


int main(){
    int size;
    cin>>size;

    int num[1000];
    //taking input in array
    for(int i=0;i<size; i++){
        cin>>num[i];
    }
    cout << "Maximum value is " << getMax(num, size) << endl;
    cout << "Minimum value is " << getMin(num, size) << endl;

    return 0;

}
