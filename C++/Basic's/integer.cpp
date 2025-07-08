// Integer store decimal
//It tipically occupies 4 bytes
#include<iostream>
using namespace std;
int main(){
    int age_of_cat={2};//Initializes to two
    int age_of_dog={3};//Initializes to three
    int age_of_animals = age_of_cat+ age_of_dog;
    cout<<"The total age of both animals is:"<<age_of_animals<<endl;
    return 0;
}
/*We can't store deimal number in integer because decimal number have 
size more than 4 bytes but some compiler allow to store decimal number
but they store the digit before the decimal rest they chop off(can't store after decimal)*/
