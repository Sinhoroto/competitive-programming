#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> N;
    vector<int> T;
    int Z,j;
    cin>>Z;
    for(int i = 0;i<Z;i++){
        cin>>j;
        if(j%2 == 0)
            N.push_back(j);
        else
            T.push_back(j);
        }
        sort(N.begin(),N.end());
        sort(T.begin(),T.end());
        reverse(T.begin(),T.end());

        for(int i =0;i<(int)N.size();i++){
    cout<<N[i]<<endl;
        }
        for(int i =0;i<(int)T.size();i++){
    cout<<T[i]<<endl;
}

}        