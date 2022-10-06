#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, i, qtdTotal, qtdMenor;
    double soma, media, porcentoMenor;

    cout << "Quantas pessoas serao digitadas?: ";
    cin >> N;

    int idades[N];
    double alturas[N];
    string nomes[N];

    for (i = 0; i < N; i++) {
        cout << "Dados da " << i+1 << "a pessoa" << endl;
        cout << "Nome: ";
        cin.ignore(INT_MAX, '\n');
        getline(cin, nomes[i]);
        cout << "Idade: ";
        cin >> idades[i];
        cout << "Altura: ";
        cin >> alturas[i];
    }

    soma = 0;
    qtdTotal = 0;
    for (i = 0; i < N; i++) {
        soma = soma + alturas[i];
        qtdTotal = qtdTotal + 1;
    }

    media = (double) soma / qtdTotal;

    cout << fixed << setprecision(2);
    cout << "Altura media: " << media << endl;

    qtdMenor = 0;
    for (i = 0; i < N; i++) {
        if (idades[i] < 16) {
            qtdMenor = qtdMenor + 1;
        }
    }

    porcentoMenor = (double) (qtdMenor * 100) / qtdTotal;

    cout << fixed << setprecision(1);
    cout << "Pessoas com menos de 16 anos: " << porcentoMenor << "%" << endl;

    for (i = 0; i < N; i++) {
        if (idades[i] < 16) {
            cout << nomes[i] << endl;
        }
    }






    return 0;
}
