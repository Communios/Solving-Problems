#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

ll cnt(ll n) {
    ll c = 0;
    for (ll i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            if (n == i * i)
                c++;
            else
                c += 2;
        }
    }

    return c;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int q;
    cin >> q;

    while (q--) {
        ll n;
        cin >> n;

        cout << cnt(n) << '\n';
    }
}
