#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,A,s=0,d=0;
cin>>N;
while(s<1000000 and N>0){
cin>>A;
N--;
s=s+A;
d++;
}
cout<<d<<endl;


return 0;
    
}