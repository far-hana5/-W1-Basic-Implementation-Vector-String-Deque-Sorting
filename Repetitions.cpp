#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >>s;
if(s.size()==0){
    cout<<0<<endl;
    return 0;
}
    int count1=1;int Mmax=1;
    for(int i=1;i<s.size();i++){
        if(s[i]==s[i-1]){
            count1++;
        }else{
         count1=1;
        }
Mmax=max(Mmax,count1);
    }
    cout<<Mmax<<endl;
}
