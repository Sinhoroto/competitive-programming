#include <bits/stdc++.h>
using namespace std;

int N, pts;
string resp, gab;


int main(){

    cin >> N >> gab >> resp;

    for(int i = 0; i < N; i++){
        if(gab[i] == resp[i]) pts++;
    }

   printf("%d\n",pts);

    return 0;
}