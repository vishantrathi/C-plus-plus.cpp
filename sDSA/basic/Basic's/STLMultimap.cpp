#include <iostream>
#include <map>
using namespace std;

void multimapExplain() {
    multimap<int, int> mmp;
    mmp.insert({3, 1});
    mmp.insert({2, 4});
    mmp.insert({2, 10});
    mmp.insert({1, 2});
    mmp.insert({2, 4});
    mmp.insert({3, 1});

   
    for (auto it : mmp) {
        cout << it.first << " " << it.second << endl;
    }
}

int main() {
    multimapExplain();
    return 0;
}
