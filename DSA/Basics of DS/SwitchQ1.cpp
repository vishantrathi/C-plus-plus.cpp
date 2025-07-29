#include<iostream>
using namespace std;
int main(){
    int amount,choice;
    cout<<"Enter the amount"<<endl;
    cin>>amount;

     cout << "Choose denomination to calculate:\n";
    cout << "1. 100\n2. 50\n3. 20\n4. 10\n";
    cin >> choice;

    int hundred=0,  fifty=0, twenty=0,  ten=0;

    switch(choice){
        case 1:hundred = amount / 100;
               amount %= 100;
        cout<<"no of 100 Notes for "<< hundred;
        break;

        case 2 :fifty = amount / 50;
               amount %= 50;
        cout<<"no of 50 Notes for "<< fifty;
        break;

        case 3:twenty = amount / 20;
               amount %= 20;
        cout<<"no of 20 Notes for "<< twenty;
        break;

        case 4:ten = amount / 10;
               amount %= 10;
        cout<<"no of 10 Notes for "<< ten;
        break;

        default:
            cout << "Invalid choice!" << endl;


    }
    return 0;
}
