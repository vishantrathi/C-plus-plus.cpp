#include<iostream>
using namespace std;

void patternTen(int n)
{
    // Upper Pyramid
    for(int i = 0; i < n; i++)
    {
        // spaces
        for(int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        // stars
        for(int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    // Lower Pyramid
    for(int i = 1; i < n; i++)
    {
        // spaces
        for(int j = 0; j < i; j++)
        {
            cout << " ";
        }

        // stars
        for(int j = 0; j < 2 * (n - i) - 1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;

    patternTen(n);

    return 0;
}
