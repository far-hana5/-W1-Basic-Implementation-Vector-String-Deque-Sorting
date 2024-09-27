#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,res=0;
    map<int,vector<int>,greater<int>>om;
    map<int,vector<int>,greater<int>>::iterator it;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        om[b].push_back(a);
    }

    for(it =om.begin();it!=om.end();it++){
        for(int i=0;i<it->second.size();i++){
            if(n>=it->second[i]){
                n=n-it->second[i];
                res= res+ (it->second[i]*it->first);
            }else{
                res=res+it->first*n;
                cout<<res<<endl;
                return 0;
            }
        }
    }
    cout<<res<<endl;
}

/*
int main(){
    int n, m, result = 0;
    map<int, vector<int>, greater<int>> om;
    map<int, vector<int>, greater<int>>::iterator it;

    cin >> n >> m;
    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        om[b].push_back(a);
    }
    for(it = om.begin(); it != om.end(); it++){
        for(int i = 0; i < it->second.size(); i++){
            if(n >= it->second[i]){
                n -= it->second[i];
                result += (it->second[i] * it->first);
            }
            else{
                result += (it->first * n);
                cout << result << endl;
                return 0;
            }
        }
    }
    cout << result << endl;
    return 0;
}

*/