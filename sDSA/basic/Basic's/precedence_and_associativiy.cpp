 /*If there are multiple operators in a single expression,
  the operations are not evaluated simultaneously. Rather,
   operators with higher precedence have their operations 
   evaluated first.
   
   Precedence = Which operation to do first.
   Associativity = Which direction or which order.
   */
  #include<iostream>
  using namespace std;
   int main(){
    int a {1};
    int b {2};
    int c {3};
    int d {4};
    int e {4};
    int f {5};
    int g {6};

    int result = a + b * c -d/e -f+g;
    int newresult = a/b*c+d-e+f;
    cout<<"result : "<<result<<endl;
    cout<<"new result : "<<newresult<<endl;

   }
