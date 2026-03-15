 /*f statement is the most simple decision-making statement. 
 It is used to decide whether a certain statement or block of 
 statements will be executed or not executed based on a certain 
 type of condition.*/
 #include<iostream>
 using namespace std;
 int main()
 {
    int number1=50;
    int number2=60;

    bool result=(number1<number2);
    cout<<boolalpha<<result;
    if(result==true){
        cout<< number1 <<" is less then "<< number2<<endl;
    }
    if(!(result==true)){
        cout<<number1<<" is not less than "<<number2<<endl;        
    }
    cout<<"-----Using the else clause-----"<<endl;
    if(result==true){
        cout<<number1<<" is less than "<<number2<<endl;
    }else{
        cout<<number1<<" is NOT less than "<<number2<<endl;
        
    }

}