#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, y, troca, soma;

    cout << "Digite dois numeros:" << endl;
    cin >> x >> y;

    if (x > y) {
        troca = x;
        x = y;
        y = troca;
    }

    soma = 0;
    for (x = x+1; x < y; x++) {
        if (x % 2 != 0) {
            soma = soma + x;
        }

    }

    cout << "Soma dos impares = " << soma;


    return 0;
}
