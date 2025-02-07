#include <iostream>
#include <map>
using namespace std;

void mapexplain() {
    map<int, int> mpp;
    
    mpp.emplace(3, 1);
    mpp.insert({2, 4});
    mpp[2] = 10; 

    
    mpp[1] = 2;
    mpp[2] = 4;
    mpp[3] = 1;
    
    for (auto it : mpp) {
        cout << it.first << " " << it.second << endl;
    }
}

int main() {
    mapexplain();
    return 0;
}
