/*C++ Relational operators are used to compare two values or expressions,
 and based on this comparison, it returns a boolean value (either true or false) 
 as the result. 
 Types are:-
 1. > Greater than
 2. < Less than
 3. >= Greater than equal to
 4. <= Less than equal to
 5. ==Equal to
 6. != Not equal to
 */
 #include<iostream>
 using namespace std;
 int main(){
    int number1{50};
    int number2{60};
    cout<<"Number 1"<<number1<<endl;
    cout<<"Number 2"<<number2<<endl;
    cout<<"------------------------"<<endl;
    cout<<"Comparing Numbers"<<endl;
    cout<<boolalpha;//shows value in true/false instead of 1 and 0
    cout<<"number1>number2 "<<(number1>number2)<<endl;
    cout<<"number1<number2 "<<(number1<number2)<<endl;
    cout<<"number1>=number2 "<<(number1>=number2)<<endl;
    cout<<"number1<=number2 "<<(number1<=number2)<<endl;
    cout<<"number1==number2 "<<(number1==number2)<<endl;
    cout<<"number1!=number2   "<<(number1>number2)<<endl;

 }