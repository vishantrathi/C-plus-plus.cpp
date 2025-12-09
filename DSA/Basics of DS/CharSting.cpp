#include <bits/stdc++.h>
using namespace std;

//length fn
    int getLength(char name[]){
        int count=0;
        for(int i=0;name[i] != '\0' ; i++){
            count++;
        }
        return count;
    }
//reverse fn
void reverse(char name[],int n){
    int s=0;
    int e=n-1;

    while(s<e){
        swap(name[s++],name[e--]);
    }
}
    int main(){
    char name[20];
    //enter the name
    cout<<"Enter your name"<<endl;
    cin>>name;
    //name[2]='/0'; 
    cout<<"Your name is "<<name<<endl;
    //length
    int len = getLength(name);
    cout<<"Length of char arr is "<<len<<endl;
    //reverse
    reverse(name,len);
    cout<<name<<endl;

    return 0;

}