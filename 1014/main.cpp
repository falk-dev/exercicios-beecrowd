/*
 *
 * 1014 - consumo
 * link: https://judge.beecrowd.com/pt/problems/view/1014
 * entrada e saída, delimitação de casas decimais
 *
 * feito em 03/04/2025
 * author: falk.dev
 *
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    float distancia, combustivel;

    cin >> distancia >> combustivel;

    float consumo = distancia / combustivel;

    cout << fixed << setprecision(3);
    cout << consumo << " km/l" << endl;
}