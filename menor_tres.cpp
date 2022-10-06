#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c, menor;

    cout << "Primeiro valor: ";
    cin >> a;
    cout << "Segundo valor: " ;
    cin >> b;
    cout << "Terceiro valor: ";
    cin >> c;

    if (a < b && b < c) {
        cout << "Menor = " << a;
    }
    else if (b < c) {
        cout << "Menor = " << b;
    }
    else {
        cout << "Menor = " << c;
    }


    return 0;
}
