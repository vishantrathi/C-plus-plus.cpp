#include<iostream>
using namespace std;

void pattern13(int n){
    for(int i=1;i<=n;i++){
        //number
        for(int j=1;j<=i;j++){
            cout<<j;
            //space
        }
            for(int j=1;j<2*(n-i);j++){
                cout<<" ";
                //number
            }
                for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
}



int main(){
    int n;
    cin>>n;
    pattern13(n);

}