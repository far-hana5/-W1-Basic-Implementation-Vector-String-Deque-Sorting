#include<bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin>>n;

   vector<int>v(n);set<int>s;
   for(int i=0;i<n;i++ ){
    cin>>v[i];
    s.insert(v[i]);
   }
   if(s.size()<2){
    cout<<"NO"<<endl;
   }else{
 set<int>::iterator itr = s.begin();
     advance(itr, 1);
   cout<<*itr<<endl;
   }
  

}