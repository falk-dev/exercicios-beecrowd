/*
 *
 * 2552 - pãodequejosweeper
 * link: https://judge.beecrowd.com/pt/problems/view/2552
 * while, for, if-else, matriz
 *
 * feito em 04/04/2025
 * author: falk.dev
 *
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int linhas, colunas;

    while (cin >> linhas >> colunas) {
        int matriz[110][110] = {{}};
        for (int i = 1; i <= linhas; i++) {
            for (int j = 1; j <= colunas; j++) {
                cin >> matriz[i][j];
            }
        }

        for (int i = 1; i <= linhas; i++) {
            for (int j = 1; j <= colunas; j++) {
                if (matriz[i][j] == 1) {
                    cout << 9;
                } else {
                    int soma = 0;
                    soma += matriz[i-1][j] + matriz[i+1][j] + matriz[i][j-1] + matriz[i][j+1];
                    cout << soma;
                }
            }
            cout << endl;
        }
    }

    return 0;
}