#include<iostream>
using namespace std;
int main(){
    //postfix
    int value = 5;
    cout<<"The value (incrementing):"<<value++<<endl;
    cout<<"The value is:"<<value<<endl;

     int valuue = 5;
    cout<<"The value (decrementing):"<<valuue--<<endl;
    cout<<"The value is:"<<valuue<<endl;
    /* If you use the ++ operator as a postfix like: var++,
    the original value of var is returned first; then var is incremented by 1 */

    //prefix
    int valuee = 5;
    cout<<"The value (incrementing):"<<++valuee<<endl;
    cout<<"The value is:"<<valuee<<endl;

    int valluuee = 5;
    cout<<"The value (decrementing):"<<--valluuee<<endl;
    cout<<"The value is:"<<valluuee<<endl;
    /*If you use the ++ operator as a prefix like: ++var,
    the value of var is incremented by 1; then it returns the value.*/
    return 0;
}