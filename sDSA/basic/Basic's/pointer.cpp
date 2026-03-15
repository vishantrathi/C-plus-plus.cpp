/*Pointers are symbolic representations of addresses. 
They enable programs to simulate call-by-reference as 
well as to create and manipulate dynamic data structures.
 Iterating over elements in arrays or other data structures 
 is one of the main use of pointers. */
 #include<iostream>
 using namespace std;
 int main()
 {
       //declare in initilize pointer
       int *p_number{}; //null ptr of type int
       double *p_fractional_number{};
       int *p_fractional_number1{};
       int *p_number1{};

       
        
        // pointers of different type have same size
        cout<<"sizeof(int) "<<sizeof(int)<<endl;
        cout<<"sizeof(double) "<<sizeof(double)<<endl;
        cout<<"sizeof(double*) "<<sizeof(double*)<<endl;
        cout<<"sizeof(int*) "<<sizeof(int*)<<endl;
        cout<<"sizeof(p_number1) "<<sizeof(p_number1)<<endl;
        cout<<"sizeof(p_factional_number1) "<<sizeof(p_fractional_number1)<<endl;
 }