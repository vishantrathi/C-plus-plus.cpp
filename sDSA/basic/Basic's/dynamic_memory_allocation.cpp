#include<iostream>
using namespace std;
int main()
{
    int *n = new int;
    *n = 10;
    if (*n/2 == 0)
        cout << "Even";
    else
        cout << "Odd";
    delete n;
    return 0;
}