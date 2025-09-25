#include<iostream>
#include<set>

using namespace std;
    int main(){
        set<int>s;
        s.insert(5);
        s.insert(5);
        s.insert(1);
        s.insert(3);
        s.insert(3);
        s.insert(2);
        s.insert(4);

        

    auto it = s.begin();
    s.erase(it); // Removes 1

for (auto i : s) {
    cout << i << endl;
}

cout<<"1 present or not ="<<s.count(1)<<endl;
    }