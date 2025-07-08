/*
AND && ()
OR ||
NOT !
*/
#include <iostream>
using namespace std;



int main(){

	bool a {true};
    bool b {false};
    bool c {true};
	
	cout << boolalpha; // true //  false
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;
	cout << "c : " << c << endl;

	
	//AND : Evaluates to true when all operands are true.
	//      A single false operand will drag 
    //      the entire expression to evaluating false.
	
	cout << endl;
	cout << "Basic AND operations" << endl;

    cout << " a && b : " << (a && b) << endl; // false
    cout << " a && c : " << (a && c ) << endl; // true
    cout << " a && b && c :" << (a && b && c) << endl; // false


	//OR : Evaluates to true when at least one operand true.
	//      A single true operand will push 
    //      the entire expression to evaluating true.
	cout << endl;
	cout << "Basic OR operations" << endl;
    cout << " a || b : " << (a || b) << endl;
    cout << " a || c : " << (a || c ) << endl;
    cout << " a ||b || c :" << (a || b || c) << endl;


	//NOT : Negates whateve operand you put it with
	cout << endl;
	cout << "Basic NOT operations" << endl;	
	
	cout << "!a : " << !a << endl;
	cout << "!b : " << !b << endl;
	cout << "!c : " << !c << endl;



	//Combinations of all these operators
	cout << endl;
	cout << "Combining logical operators" << endl;
	// !(a &&b) || c
	cout << "!(a &&b) || c : " << (!(a &&b) || c) << endl; // true


    //Combining logical operators with relational operators
	int d{45};
	int e{20};
	int f{11};
	
	cout << endl;
	cout << "Relational and logic operations on integers" << endl;
	cout << "d : " << d << endl;
	cout << "e : " << e << endl;
	cout << "f : " << f << endl;
	
	cout << endl;
	
	cout << "(d > e) && (d > f) : " << ((d > e) && (d > f)) << endl; // true
	cout << "(d==e) || (e <= f ) : " << ((d==e) || (e <= f ) ) << endl;
	cout << "(d < e) || (d > f) : " << ((d < e) || (d > f)) << endl;
	cout << "(f > e) || (d < f) : " << ((f > e) || (d < f)) << endl;
	cout << "(d > f) && (f <= d) : " << ((d > f) && (f <= d)) << endl;
	cout << "(d > e) && (d <= f) : " << ((d > e) && (d <= f)) << endl;
	cout << "(! a) && (d == e) : " << ((! a) && (d == e)) << endl;
	cout << "(! a) && (d == e) : " << ((! a) && (d == e)) << endl;
   
    return 0;
}