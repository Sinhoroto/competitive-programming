#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, G, F, total = 0;
    cin >> N >> G >> F;

    if(G >= N and F >= N){
        cout << "Bora rangar" << "\n";
    }else{
        if(G < N){
            total += N-G;
        }
        if(F < N){
            total += N-F;
        }
        cout << total << "\n";
    }

    return 0;
}