#include<iostream>
using namespace std;
int main(){
int n,num;string s,x,y;
x={};y={};
cin>>n;

cin>>s;
num=n;
for(int i=1;i<=(s.size());i++){
    x=s.substr(0,i);
    y=s.substr(i,i);
    if(x==y){
        num=n-i+1;
    }
}
cout<<num<<endl;
}
