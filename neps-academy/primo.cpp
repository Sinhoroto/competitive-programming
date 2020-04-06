#include<bits/stdc++.h>

using namespace std;

bool eh_primo (int num)
{   
    int cont = 0;

    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            cont  = cont + 1;
            break;
        }
    }
    if (cont == false)
    {
        cout <<"S"<<endl;
    }
    else if (cont  == true)
    {
        cout <<"N"<<endl;
    }
}

int main ()
{
    int N, aux = 0;

    cin >> N;

    if (N == 1)
    {
        cout <<"N"<<endl;
    }
    else 
    {
        aux = eh_primo(N);
    }

    return 0;
}