#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        ll h = 1;

        for (ll i = 1; i <= n; i++) {
            if (i & 1)
                h *= 2;
            else
                h += 1;
        }

        cout << h << '\n';
    }
}
