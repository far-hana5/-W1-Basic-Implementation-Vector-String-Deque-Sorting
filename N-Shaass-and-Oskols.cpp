#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    //vector<long long>v(n+1);
    long long v[n+1];
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int m,x,y;
    cin>>m;
    while(m--){
  
    cin>>x>>y;


    x=x-1;
    v[x-1]=v[x-1]+(y-1);
    v[x+1]=v[x+1]+ (abs(v[x]-y));
    v[x]=0;
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<endl;
    }
}