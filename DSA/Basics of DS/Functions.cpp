#include<iostream>
#include<math.h>
using namespace std;

    // int a,b;
    // cin>>a>>b;
//     int ans=1;
//     for(int i=1;i<=b;i++){
//     ans=ans*a;
// }
// cout<<"answer is "<<ans<<endl;

//poe(a,b)
// int ans=pow(a,b);
// cout<<ans;
// return 0;


// bool isEven(int a) {
//     return !(a & 1); // returns true if even, false if odd
// }

// int main() {
//     int num;
//     cin >> num;
    
//     if (isEven(num)) {
//         cout << num << " is even" << endl;
//     } else {
//         cout << num << " is odd" << endl;
//     }
// }

int factorial(int n){
    int fact =1;
    for(int i=1; i<=n;i++){
        fact=fact*i;
    }
    return fact;
}

int ncr(int n,int r){
    int num =fact(n);
    int denom=
}