#include<iostream>
using namespace std;
int main(){
    //Pattern 1

    // int n;
    // cin>>n;
    
    // int i=1;
    // while(i<=n){
    //     int j =1;
    //     while(j<=n){
    //         cout<<""<<i; 
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }

    //Pattern 2
    // int n;
    // cin>>n;
    // int i=1;
    // while(i<=n){
    //    int j=1;
    //    while(j<=n){
    //     // cout<<i;  //output:1234
    //     cout<<n-j+1; //output:4321
    //     j=j+1;
    //    }
    //    cout<<endl;
    //    i=i+1;
    // }

    //Pattern 3
    // int n;
    // cin>>n;

    // int i=1;
    // int count =1;
    // while (i<=n){
    //     int j=1;
    //     while (j<=n){
    //         cout<<count<<" ";
    //         count=count+1;
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }


    //Pattern 4
    // int n;
    // cout<<"Enter a number"<<endl;
    // cin>>n;
    // int count=1;
    // int row=1;
    //     while(row<=n){
    //         int col=1;       
    //         while(col<=row){
    //             cout<<" "<<count;
    //             count++;
    //             col=col+1;       
    //         }
    //         cout<<endl;
    //         row=row+1;
    //     }

    //Pattern 5
    // int n;
    // cin>>n;
    // int row=1;
    // while(row<=n){
    //     int col=1;
    //     int value=row;
    //     while (col<=row){
    //         cout<<value;
    //         value=value+1;
    //         col=col+1;
    //     }
    //     cout<<endl;
    //     row=row+1;
    // }

    //Patten 6
    // int n;
    // cin>>n;

    // int row=1;
    // while(row<=n){
    //     int col=1;
    //     while(col<=row){
    //         cout<<row-col+1<<" ";
    //         col=col+1;
    //     }
    //     cout<<endl;
    //     row=row+1;  
    // }

    //Pattern 7
    // int n;
    // cin>>n;

    // int row=1;
    // while(row<=n){
    //     int col=1;
    //     while(col<=row){
    //         char ch='A'+row-1;  //using ascii values to print b,c,d;
    //         cout<< ch;
    //         col=col+1;
    //     }
    //     cout<<endl;
    //     row=row+1;
    // }

    //Pattern 8

    // int n;
    // cin>>n;
    // int row=1;
    // while (row<=n)
    // {
    //     int col=1;
    //     int count=1;
    //     while (col<=row)
    //     {
    //         cout<<count;
    //         count++;
    //         col=col+1;
    //     }
    //     row=row+1;
    //     cout<<endl;   
    // }

    //Pattern 9

    int n;
    cin>>n;
    int row =1;
    while(row<=n){
        int space =n-row;
        while(space){
            cout<<" ";
            space=space-1;
        }
        int col=1;
        cout<<"*";
        col=col+1;
    }
    cout<<endl;
    row=row+1;
}
