#include<bits/stdc++.h>
using namespace std;
int main(){
    char num[6];
    fgets(num, 6, stdin);
    int a = (num[0] - '0');
    int b = (num[2] - '0');
    int c = (num[4] - '0');
    char r;
    if(a != b && a != c){
        r = 'A';
    }
    else if(b != a && b != c){
        r = 'B';
    }
    else if(c != a && c != b){
        r = 'C';
    }
    else{
        r = '*';
    }
    printf("%c", r);
    return 0;
}