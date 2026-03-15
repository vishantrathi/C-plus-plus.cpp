#include<bits/stdc++.h>
using namespace std;

int cnt = 0;

void recu(){
    if(cnt == 3) return;
    cout << cnt << endl;
    cnt++; // if i say count it says count is ambiguous and it thinks it is std::count
    recu();
}

int main(){
    recu();
    return 0;
}