#include<bits/stdc++.h>
using namespace std;


//map
//map stores data in key–value pairs.
//store in key in sorted way
void expMap(){
    
    map<int,string>m;

    m[1]="Raj";
    m[2]="Ravi";
    m[3]="Rajat";
    m[4]="Rajan";
    m.insert({5,"Kiran"});

    m.erase(2);
    m.count(1);

    for(auto x : m){
        // cout << x.first << " " << x.second << endl;
    }

    map<int,int>mp;
    mp[1]=2;
    mp.emplace(2,4);
    mp.emplace(3,9);

    for(auto y:mp){
        cout<<y.first<<" "<<y.second<<endl;
    }

    cout<<mp[5]; //0=>not exist

    auto it =mp.find(5);

    auto itt =mp.lower_bound(2);
    auto itt =mp.lower_bound(3);

    // all other funntion are same as other



    void expMultiMap(){
        //store multiple keys
        //only mpp[key] can't use here
    }

    void expUnorderMap(){
        //not sorted
        //uniques keys
        
    }



     

}

int main(){
    expMap();
}