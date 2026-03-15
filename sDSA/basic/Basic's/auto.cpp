/*auto was a keyword that C++ "inherited" from C 
that had been there nearly forever, but virtually 
never used because there were only two possible conditions:
 either it wasn't allowed, or else it was assumed by default.
 
 auto is basically used for automatically 
 guess the type of variable you pass*/
#include<iostream>
using namespace std;
int main(){
     auto var1{12}; //int
     auto var2{13.0}; //double
     auto var3{14.0f}; //float
     auto var4{15.01l}; //long double
     auto var5{'e'}; //character

     //integer modifire suffixes
     auto var6{123u}; //unsigned int
     auto var7{123ul}; //unsigned long
     auto var8{12ll}; //long long
     cout<<"var1 occupies:"<<sizeof(var1)<<" memory in bytes"<<endl;
     cout<<"var2 occupies:"<<sizeof(var2)<<" memory in bytes"<<endl;
     cout<<"var3 occupies:"<<sizeof(var3)<<" memory in bytes"<<endl;
     cout<<"var4 occupies:"<<sizeof(var4)<<" memory in bytes"<<endl;
     cout<<"var5 occupies:"<<sizeof(var5)<<" memory in  bytes"<<endl;
     cout<<"var6 occupies:"<<sizeof(var6)<<" memory in bytes"<<endl;
     cout<<"var7 occupies:"<<sizeof(var7)<<" memory in bytes"<<endl;
     cout<<"var8 occupies:"<<sizeof(var8)<<" memory in bytes"<<endl;
     return 0;
     }