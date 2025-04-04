/*
 *
 * 1019 - conversao de tempo
 * link: https://judge.beecrowd.com/pt/problems/view/1019
 * for, while
 *
 * feito em 03/04/2025
 * author: falk.dev
 *
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int minutos_total = 0;
    int horas = 0;
    int minutos = 0;

    cin >> minutos_total;

    for (int i = 0; i < minutos_total; i++)
    {
        while (minutos_total >= 3600)
        {
            horas++;
            minutos_total = minutos_total - 3600;
        }
        while (minutos_total >= 60)
        {
            minutos++;
            minutos_total = minutos_total - 60;
        }
    }

    cout << horas << ":" << minutos << ":" << minutos_total << endl;

    return 0;
}