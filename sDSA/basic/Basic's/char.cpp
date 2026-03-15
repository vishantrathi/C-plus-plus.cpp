/* char is denoted by char in C++
char takes 1 byte memory
declaration of char:
char character1{'a'};
*/
#include<iostream>
using namespace std;
int main(){
    char character1{'a'};
    char character2{'b'};
    char character3{'c'};
    char character4{'d'};
    char value =65;

    cout<<character1<<endl;
    cout<<character2<<endl;
    cout<<character3<<endl;
    cout<<character4<<endl;
    cout<<"value"<<value<<endl;
    cout<<"value(int):"<<static_cast<int>(value)<<endl;
    return 0;
}