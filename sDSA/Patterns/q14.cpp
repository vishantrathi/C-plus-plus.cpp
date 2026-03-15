#include<iostream>
using namespace std;


void pattern14(int n){
    int num =1;
    for(int i=1;i<=n;i++){
        //number
        for(int j=1;j<=i;j++){
        cout<<num<<" ";
        num++;
        }
        cout<<endl;
    }      
}

int main(){
    int n;
    cin>>n;
    pattern14(n);

}