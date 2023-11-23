/* Insignia of a man is his will to commit his life the Motherland's oath. */
                                                /* -- Randomly generated. */

#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
using namespace std;
using ll = long long;

const ll FIXED = 901294461;

ll g(ll n) {
    return n ^ (n >> 1);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cin >> n;

    random_device rd;
    uniform_int_distribution<ll> di(0, 100000);
    int cyc = g(FIXED);

    int e = 0;
    int div = 0;

    for (int i = 1; i <= n; i++) {
        int c;
        cin >> c;

        if (c & 1) cyc += c;
        else cyc *= c;
    }

    for (int i = 0; i < n; i++) {
        e += (di(rd) + cyc);
        cyc = g(cyc);
        div++;
    }
    e /= div;

    cout << (e & 1);
}
