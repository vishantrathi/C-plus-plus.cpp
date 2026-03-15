#include<iostream>
using namespace std;
int main(){
    int number[] {1,2,3,4,5,6,7,8,9,0};
    //Read beyond bounds : Will read garbage or crash your program
    cout<<"number[12] "<<number[12]<<endl;
    /*Write beyond bounds. The compiler allows it. But you don't own 
	the memory at index 12, so other programs may modify it and your
	program may read bogus data at a later time. Or you can even
	corrupt data used by other parts of your ptogram*/
    number[12]=1000;
    cout<<"number[12] "<<number[12]<<endl;
    return 0;
}