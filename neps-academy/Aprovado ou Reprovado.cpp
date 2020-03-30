#include<bits/stdc++.h>
using namespace std;
int main(){
    float A,B,media;
    cin >>A>>B;
    media = (A+B)/2;
    if(media>= 7)
        printf("Aprovado\n");
    else if(media>=4 && media<7)
        printf("Recuperacao\n");
    else
        printf("Reprovado\n");
}