//so the question is print the name five times using recurtion

#include<bits/stdc++.h>
using namespace std;

void name(string naam,int n){
    if(n==5) return;
    cout<<naam<<" "<<n<<endl;
    name(naam,n+1);

}
int main(){
    string naam;
    cin>>naam;
    name(naam,0);
}