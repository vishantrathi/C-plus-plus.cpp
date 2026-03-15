/* 
some basic operation are 
add(+)
subtract(-)
divide(/)
modulus(%)
multiply(*)
*/
 #include<iostream>
 using namespace std;
 int main(){
    int number1{10};
    int number2{2};
    //Addition
    int result=number1+number2;
    cout<<"Addition of numbers = "<<result<<endl;
    //S ubtraction
    int subtract =number1-number2;
    cout<<"Subtraction of numbers = "<<subtract<<endl;
    //Multiplication
    int multiplies =number1*number2;
    cout<<"Multiplication of numbers = "<<multiplies<<endl;
    //Division
    int Division =number1/number2;
    cout<<"Division of numbers = "<<Division<<endl;
    //Modulus(it capture the remainder)
    int modulus =number1%number2;
    cout<<"Modulus of numbers = "<<modulus<<endl;
    return 0;
 }