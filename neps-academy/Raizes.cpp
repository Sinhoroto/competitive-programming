#include<bits/stdc++.h>
using namespace std;
int main(){
float N, M,result;
cin>>N;
for(int i=0;i<N;i++){
    cin>>M;
    result = sqrt(M);
    printf("%.4f\n",result);
}
return 0;
}