/*
 *
 * 1153 - fatorial simples
 * link: https://judge.beecrowd.com/pt/problems/view/1153
 * for
 *
 * feito em 03/04/2025
 * author: falk.dev
 *
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, aux = 1;

    cin >> N;

    for (int i = N; i > 0; i--)
    {
        aux = aux * i;
    }

    cout << aux << endl;

    return 0;
}