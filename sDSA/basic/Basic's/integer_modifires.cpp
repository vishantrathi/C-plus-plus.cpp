/*C++ Type Modifiers: short, long, signed and unsigned

These modifires only apply to integral types in which you can store decimal number

1.Signed
Signed variables can hold both positive and negative integers including zero
Example:
positive valued integer 
signed int x = 23;
negative valued integer
signed int y = -13;
zero-valued integer
signed int z = 0;

2.Unsigned
The unsigned variables can hold only non-negative integer values.
For example,
positive valued integer
unsigned int x = 2;
unsigned int y = 0;

3.Sort
We can use short for small integers (in the range −32,767 to 32,767). For example,
small integer
short a = 12345;

4.Long
If we need to store a large integer (in the range -2147483647 to 2147483647), we can use the type specifier long. For example,
large integer 
long b = 123456;*/

#include<iostream>
using namespace  std;
int main(){
    int value1 {10};
    signed value2 {-100};
    cout<<"value1="<<value1<<endl;
    cout<<"value2="<<value2<<endl;
    cout<<"size of value 1 in bytes="<<sizeof(value1)<<endl;
    cout<<"size of value 2 in bytes="<<sizeof(value2)<<endl;


    unsigned int value3 {4};
    //unsigned int value4{-5}; // Compiler error.


    //short and long
    short short_var {-32768} ; //  2 Bytes 
    short int short_int {455} ; // 
    signed short signed_short {122}; //
    signed short int signed_short_int {-456}; // 
    unsigned short int unsigned_short_int {456};
    
    int int_var {55} ; // 4 bytes
    signed signed_var {66};//
    signed int signed_int {77};//
    unsigned int unsigned_int{77};
    
    long long_var {88}; // 4 OR 8 Bytes
    long int long_int {33};
    signed long signed_long {44};
    signed long int signed_long_int {44};
    unsigned long int unsigned_long_int{44};

    long long long_long {888};// 8 Bytes
    long long int long_long_int {999};
    signed long long signed_long_long {444};
    signed long long int signed_long_long_int{1234};
    unsigned long long int unsigned_long_long_int{1234};


        std::cout << "Short variable : " << short_var<<  " , size : "
        << sizeof (short) << " bytes" << std::endl;

        std::cout << "Short Int : " << short_int << " , size : "
        << sizeof (short int) << " bytes" << std::endl;

        std::cout << "Signed short : " << signed_short
        << " , size : " << sizeof (signed short) << " bytes" << std::endl;

        std::cout << "Signed short int :  " << signed_short_int
        <<  " , size : " << sizeof (signed short int) << " bytes" << std::endl;
        
        std::cout << "unsigned short int :  " << unsigned_short_int
        <<  " , size : " << sizeof (unsigned short int) << " bytes" << std::endl;
        
        std::cout << "---------------------" << std::endl;




    std::cout << "Int variable :  " << int_var <<" , size : "
        << sizeof (int) << " bytes" << std::endl;

    std::cout << "Signed variable " << signed_var <<" , size : "
        << sizeof (signed) << " bytes" << std::endl;

    std::cout << "Signed int :  " << signed_int <<" , size : "
        << sizeof (signed int) << " bytes" << std::endl;
        
    std::cout << "unsigned int :  " << unsigned_int <<" , size : "
        << sizeof (unsigned int) << " bytes" << std::endl;
        
    std::cout << "---------------------" << std::endl;


    std::cout << "Long variable :  " << long_var << " , size : "
        << sizeof (long) << " bytes" <<std::endl;

    std::cout << "Long int :  " << long_int <<" , size : "
        << sizeof (long int) << " bytes" << std::endl;

    std::cout << "Signed long :  " << signed_long <<" , size : "
        << sizeof (signed long) << " bytes" << std::endl;

    std::cout << "Signed long int : " << signed_long_int <<" , size : "
        << sizeof (signed long int) << " bytes" << std::endl;
        
    std::cout << "unsigned long int : " << unsigned_long_int <<" , size : "
        << sizeof (unsigned long int) << " bytes" << std::endl;
        
    std::cout << "---------------------" << std::endl;



    std::cout << "Long long : " << long_long <<" , size : "
        << sizeof (long long) << " bytes" << std::endl;

    std::cout << "Long long int : " << long_long_int <<" , size : "
        << sizeof (long long int) << " bytes" << std::endl;

    std::cout << "Signed long long : " << signed_long_long <<" , size : "
        << sizeof (signed long long) << " bytes" <<std::endl;
        
    std::cout << "Signed long long int : " << signed_long_long_int <<" , size : "
        << sizeof (signed long long int) << " bytes" << std::endl;
        
    std::cout << "unsigned long long int : " << unsigned_long_long_int <<" , size : "
        << sizeof (unsigned long long int) << " bytes" << std::endl;
        
    std::cout << "---------------------" << std::endl;
   
    return 0;
}