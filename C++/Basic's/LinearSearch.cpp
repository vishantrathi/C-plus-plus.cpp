#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5, 8, 9, 11};
    int key  = 8;
    auto it = find(v.begin(), v.end(), key);
    if (it != v.end())
        cout << key << " Found at Position: " <<
              it - v.begin() + 1;
    else
        cout << key << " NOT found.";

    return 0;
}