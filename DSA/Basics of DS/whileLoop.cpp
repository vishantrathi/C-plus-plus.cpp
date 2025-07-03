#include<iostream>
using namespace std;
int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         cout<<"Lesser than "<<n<<endl;
//         i=i+1;
//     }

//find the sum of numbers from 1 to n
    // int n;
    // cin >> n;
    // int i = 1;
    // int sum =0;
    // while (i <= n){
    //     sum = sum + i;
    //     cout << "Sum of numbers from 1 to " << n << " is: "<<sum<<endl;
    //     i=i+1;
    // }

    //find the sum of even numbers from 1 to n
    // int n;
    // cin >>n;
    // int i = 2;
    // int sum = 0;
    // while (i <= n) {
    //     sum = sum + i;
    //     cout << "Sum of even numbers from 1 to " << n << " is: " << sum << endl;
    //     i = i + 2;
    // }


    //prime number or not
    int n;
    cout << "Enter a number: ";
    cin >> n;
    bool isPrime = true;
    if (n <= 1) {
        isPrime = false; 
    } else {
        int i = 2;
        while (i * i <= n) { // Check divisibility up to the square root of n
            if (n % i == 0) {
                isPrime = false; // Found a divisor, so it's not prime
                break;
            }
            i++;
        }
    }
}