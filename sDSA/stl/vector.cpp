#include<bits/stdc++.h>
using namespace std;

void vectorExp(){
     vector<int>v;
     v.push_back(1);
     v.emplace_back(2);

     //this is the range based loop
     for(int x:v){
        cout<<x<<" "<<endl;
     }
}
// it means that for every element in the v store it in the x and run the loop;


void vectorv1(){
    vector<pair<int,int>>v1;
     v1.push_back({3,4});
   // the difference betn push_back and emplace_back is that the push back need ({}) for pair where as emplace_back does n't;
     v1.emplace_back(5,6);
     for(auto y:v1){ 
   // auto tells the compiler to figure out the data type;
        cout<<y.first<<" "<<y.second<<endl;
     }

   }

   


   void vectorV2(){
      vector<int>v2(5,10); // container holding 5 copies of 10
      for(auto z:v2){
         cout<<z<<endl;
      }

   }


      void vectorV3(){
      vector<int>v3(5); // container holding 5 copies of nothing(0)
      
      for(auto z1:v3){
         cout<<z1<<endl;
      }

   }

      void vectorV4(){

         vector<int>vv(5);
         vector<int>v4(vv);// v4 holding copy of v2 note need to declare in same scope other wise it gives the err;
      for(auto z2:v4){
         cout<<z2<<endl;
      }

   }


   // so the question is that how to access the vector 
   // to access the vector we need to acess it in the same way as we access the array a[0] or use the itreators
   // the iterators points towards to the memory holding the value;

   void iterators(){

      vector<int>v = {1,2,3,4,5,6,7,8,9};
   vector<int>::iterator it=v.begin();

   it++;
   cout<<*(it)<<" ";

   it = it+2;
   cout<<*(it)<<" ";


   // vector<int>::iterator it = v.end();
   // vector<int>::iterator it = v.rend();
   // vector<int>::iterator it = v.rbegin();

   cout<<v[0]<<" "<<v.at(0);
   cout<<v.back()<<" "; //the last element 

   for(auto it=v.begin(); it != v.end(); ++it){// AUTO ASSIGN DATA TYPE AUTOMATICALLY
      cout<<*it<<" ";
   }

   for(auto it = v.rbegin(); it != v.rend(); ++it){ 
      cout<<*it<<" ";   }
   // cout<<endl;
}

void vectorE(){
     vector<int>e;
     e.push_back(1);
     e.emplace_back(2);
     e.emplace_back(3);
     e.emplace_back(4);
     e.emplace_back(5);

     //this is the range based loop
     for(int x:e){
      //   cout<<x<<" ";
     }

     

     e.erase(e.begin(), e.begin()+2); //1,2 the last element is not included
     e.insert(e.begin(),300); // adds the 300 in the fornt of the vector => 300 3 4 5 
     e.insert(e.begin()+1,2,66); // adds at the index0+1 , the two 66 at the index 2,3 => 300 66 66 3 4 5 
     
   vector<int>copy(2,50);//50 50
   e.insert(e.begin(),copy.begin(),copy.end()); // so says that the elemnt of the copy vector insert into the e vector, starting from copy.begin(), and  end it to the copy.end();
   // 50 50 300 66 66 3 4 5 
   e.pop_back(); //pops the last element  //pops the 5 from the vector

   e.swap(copy); // swaps the two vector  //50 50

   e.clear(); // clear everything from the vector // the size is 0
   for(int x:e){
      cout<<x<<" "<<endl;
      
     }

     cout<<"The size is "<<e.size()<<endl; // the no of element in an array

     cout<<e.empty();

     




}
int main(){

   // vectorExp();
   // vectorv1();
   // vectorV2();
   // vectorV3();
   // vectorV4();
   vectorE();


}