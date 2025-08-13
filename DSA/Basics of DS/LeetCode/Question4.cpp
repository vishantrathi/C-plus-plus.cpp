// Problem statement
// Given an array of size N, find the sum of its elements.

// Detailed explanation ( Input/output format, Notes, Images )
// Constraints:
// 1 <= n <= 100000
// -10000 <= ai <= 10000
// Output Format
// In single line, print one integer : sum of all the elements in the array
// Sample Input 1:
// 5
// 1 2 3 4 5 
// Sample Output 1:
// 15
// Sample Input 2:
// 4
// -1 5 3 0
// Sample Output 2:
// 7
// C++ (g++ 5.4)
// 12345678910

int arraySum(int arr[], int n)
{
    int sum =0;
    for(int i=0;i<n;i++){
        sum = sum+arr[i];

    }
    return sum;
}


//Platform coding ninjas



