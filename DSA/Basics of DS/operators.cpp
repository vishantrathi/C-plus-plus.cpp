#include<iostream>
using namespace std;
int main(){
    // Arithmetic Operators
    cout<<"Arithmatic Operator"<<endl;
    int i=1;
    int j=2;
    cout<<i++<<endl;// i++ phele value use karega uske baad increment.
    cout<<++i<<endl;//++i phele value increment karega uske baad use. 
    cout<<i+j<<endl;
    cout<<i-j<<endl;
    cout<<i/j<<endl;
    cout<<i%j<<endl;
    
    //Relational Operator
    cout<<"Relational operator"<<endl;
    cout<<(i==j)<<endl;
    cout<<(i!=j)<<endl;
    cout<<(i>j)<<endl;
    cout<<(i<j)<<endl;
    cout<<(i>=j)<<endl;
    cout<<(i<=j)<<endl;

    //Logical Operator
    cout<<"Logical Operator"<<endl;
    cout<<(i&&j)<<endl; //both are non-zero → true → prints 1
    cout<<(i||j)<<endl; //at least one is non-zero → true → prints 1
    cout<<(!j)<<endl;// j is non-zero → false → prints 0

    // Bitwise Operator
    int a=0101;
    int b=0011;

    cout<<"Bitwise Operator"<<endl;
    cout<<(a&b)<<endl; // bitwise AND
    cout<<(a|b)<<endl; // bitwise OR
    cout<<(a^b)<<endl; // bitwise XOR
    cout<<(~a)<<endl;  // bitwise NOT
    cout<<(a<<1)<<endl; // left shift
    cout<<(a>>1)<<endl; // right shift

    // Assignment Operator
    cout<<"Assignment Operator"<<endl;  
    int c=5;
    c+=2; // c = c + 2
    cout<<c<<endl; // prints 7      
    c-=2; // c = c - 2
    cout<<c<<endl; // prints 5
    c*=2; // c = c * 2
    cout<<c<<endl; // prints 10         
    c/=2; // c = c / 2
    cout<<c<<endl; // prints 5
    c%=2; // c = c % 2
    cout<<c<<endl; // prints 1
    c&=2; // c = c & 2
    cout<<c<<endl; // prints 0
    c|=2; // c = c | 2
    cout<<c<<endl; // prints 2
    c^=2; // c = c ^ 2
    cout<<c<<endl; // prints 0
    c<<=1; // c = c << 1
    cout<<c<<endl; // prints 0
    c>>=1; // c = c >> 1
    cout<<c<<endl; // prints 0
    c=5; // reset c to 5 for further operations
    c=~c; // c = ~c
    cout<<c<<endl; // prints -6 (two's complement representation)

    // Miscellaneous Operators
    cout<<"Miscellaneous Operators"<<endl;
    // Sizeof Operator
    cout<<"Size of int: "<<sizeof(int)<<endl; // prints size of int in bytes
    int e = 3, f = 4;
    // Conditional Operator
    int result = (e < f) ? e : f; // if e < f, result = e, else result = f
    cout << "The greatest number "
         "is " << result;

    return 0;
}
