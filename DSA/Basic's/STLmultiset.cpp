#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    for (int elem : ms) {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}
