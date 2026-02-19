#include<iostream>
using namespace std;

void pattern(int n){

    for(int i=1;i<=2*n;i++){

        int stars;
        int spaces;

        if(i<=n){
            stars = i;
            spaces = 2*(n-i);
        }
        else{
            stars = 2*n - i;
            spaces = 2*(i-n);
        }

        // left stars
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }

        // spaces
        for(int j=1;j<=spaces;j++){
            cout<<" ";
        }

        // right stars
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }

        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    pattern(n);
}
