#include <bits/stdc++.h>


using namespace std;

int main()
{
    int N, i, j, qtd;

    cout << "Qual a ordem da matriz? ";
    cin >> N;

    int mat[N][N];

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            cout << "Elemento [" << i << "," << j << "]:";
            cin >> mat[i][j];
        }
    }

    cout << "Diagonal principal:" << endl;
    for (i = 0; i < N; i++) {
        cout << mat[i][i] << " ";
    }
    cout << endl;

    qtd = 0;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (mat[i][j] < 0) {
                qtd = qtd + 1;
            }
        }
    }

    cout << "Quantidade de negativos = " << qtd;

    return 0;
}
