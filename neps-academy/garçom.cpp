#include<bits/stdc++.h>
using namespace std;
int N,L,C,X;
int main(){
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>L>>C;
        if(L>C){
            X=X+C;
        }
    }
    printf("%d\n",X);
}