#include<iostream>
using namespace std;
int main(){
    pair<int,int>arr[]={{1,2,},{2,3},{3,4}};
    for(int i=0;i<3;i++){
        cout<<arr[i].first<<" "<<arr[i].second<<endl;
    }
    return 0;
}