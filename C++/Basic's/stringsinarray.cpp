#include<iostream>
using namespace std;
int main(){
    char message[]{'h','e','l','l','o','\0'};
    /*In C++, we use the null character (\0) to denote the end of a string. 
    This is because strings in C++ are represented as arrays of characters,
    and there’s no built-in way for the program to know where the string 
    ends within the array.*/


    cout<<"message "<<message<<endl;
    return 0; 
}