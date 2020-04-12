#include<bits/stdc++.h>
using namespace std;
#define tam 100005;
int main(){
    vector<int> N;
    int Z,j;
    cin>>Z;
    for(int i = 0;i<Z;i++){
        cin>>j;
        N.push_back(j);
    }
    sort(N.begin(), N.end());
    for(int i =0;i<(int)N.size();i++){
    cout<<N[i];}
    cout<<"\n";
}