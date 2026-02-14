#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<6;i++){
        for(int j=1;j<6-i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}