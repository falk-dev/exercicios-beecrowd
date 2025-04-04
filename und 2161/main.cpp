/*
 *
 * 2161 - raiz quadrada de 10
 * link: https://judge.beecrowd.com/pt/problems/view/2161
 * 
 *
 * feito em 04/04/2025
 * author: falk.dev
 *
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int rep;
    float den = 6.0, soma = 0.0;

    cin >> rep;

    for (int i = 1; i <= rep; i++) {
        den = 6.0 + (1/den);
    }

    soma = 3 + 1/den;

    cout << fixed << setprecision(10);
    cout << soma << endl;

    return 0;
}