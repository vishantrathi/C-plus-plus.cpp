#include <iostream>
using namespace std;

int main() {
    // Declare a 2D array with 3 rows and 4 columns
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Access and print each element of the 2D array
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            cout << "Element at [" << i << "][" << j << "]: " << matrix[i][j] << endl;
        }
    }

    return 0;
}
