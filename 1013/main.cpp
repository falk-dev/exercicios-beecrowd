/*
 *
 * 1013 - o maior
 * link: https://judge.beecrowd.com/pt/problems/view/1013
 * for, if-else
 *
 * feito em 03/04/2025
 * author: falk.dev
 *
*/

#include <iostream>

using namespace std;

int main() {
    int num, maior = 0;

    for (int i = 0; i < 3; i++) {
        cin >> num;

        if (num > maior) {
            maior = num;
        }
    }

    cout << maior << " eh o maior" << endl;
}