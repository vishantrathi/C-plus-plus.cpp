#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int>ls;
    ls.push_back(2);
    ls.emplace_back(4);
    ls.push_front(5);
    ls.emplace_front(7);

    for (int i : ls) {
        cout << i << " "<<endl;
    }

    return 0;
}
