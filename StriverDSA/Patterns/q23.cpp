#include<iostream>
using namespace std;

void pattern(int n){
        for(int i=0;i<2*n-1;i++){
            for(int j=0;j<2*n-1;j++){
                int top =i;
                int left =j;
                int right =(2*n-2)-j;
                int down=(2*n-2)-i;
                cout<<(n-min(min(top,down),min(left,right)));
            }
            cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    pattern(n);
}