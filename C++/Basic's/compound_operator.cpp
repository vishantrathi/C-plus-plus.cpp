/*In C++, the assignment operator can be combined 
into a single operator with some other operators to 
perform a combination of two operations in one single 
statement. These operators are called Compound Assignment
Operators. There are 10 compound assignment operators in C++:

Addition Assignment Operator ( += )
Subtraction Assignment Operator ( -= )
Multiplication Assignment Operator ( *= )
Division Assignment Operator ( /= )
Modulus Assignment Operator ( %= )
Bitwise AND Assignment Operator ( &= )
Bitwise OR Assignment Operator ( |= )
Bitwise XOR Assignment Operator ( ^= )
Left Shift Assignment Operator ( <<= )
Right Shift Assignment Operator ( >>= )*/
#include<iostream>
using namespace std;
int main(){

    int value {45};
    
    cout << "The value is : " << value <<endl;
    
  
    value = value + 5;
    //value +=5; // equivalent to value = value + 5
    cout << "The value is (after +=5) : " << value << endl; // 50

   
    value -=5; // equivalent to value = value - 5
    cout << "The value is (after -=5) : " << value << endl; // 45 


    value *=2;
    cout << "The value is (after *=2) : " << value << endl; // 90


    value /= 3;
    cout << "The value is (after /=3) : " << value << endl; // 30

    value %= 11;
    cout << "The value is (after %=11) : " << value <<endl;// 8
    return 0;
}