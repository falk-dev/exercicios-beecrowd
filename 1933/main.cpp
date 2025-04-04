/*
 *
 * 1933 - tri-du
 * link: https://judge.beecrowd.com/pt/problems/view/1933
 * if-else
 *
 * feito em 03/04/2025
 * author: falk.dev
 *
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int carta1, carta2;

    cin >> carta1 >> carta2;

    if (carta1 == carta2)
    {
        cout << carta1 << endl;
    } else {
        if (carta1 > carta2)
        {
            cout << carta1 << endl;
        } else
        {
            cout << carta2 << endl;
        }
    }

    return 0;
}