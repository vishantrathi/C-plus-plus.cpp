//if the reverse of a string is also equal then it is Palindrome.
//noon(reverse it)= noon {hence, it is Palindrome}
#include<bits/stdc++.h>
using namespace std;
//to lower case
char tolowercase(char ch){
    if(ch>='a'&& ch<='z')
        return ch;
    else{
            char temp= ch-'A'+'a';
            return temp;
        }
    }

    //check plaindrome 
bool Palindrome(char a[],int n){
  int s=0;
  int e=n-1;
  while(s<e){
    if(tolowercase(a[s])!=tolowercase(a[e])){
        return 0;
    }else{
        s++;
        e--;
    }
  }
  return 1;
}

int main(){
    char name[20];
    cout<<"Enter the string"<<endl;
    cin>>name;
     int len =strlen(name);
    cout<<"Palindrome or not "<<Palindrome(name,len)<<endl;;
    cout<<tolowercase<<Palindrome;
    return 0;
}