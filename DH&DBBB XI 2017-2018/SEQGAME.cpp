#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
using ll = long long;
using pib = pair<long long, bool>;

const ll INF = 1e18;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll m, n, k;
    cin >> m >> n >> k;

    ll a[m], b[n];

    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    sort(a, a + m);
    sort(b, b + n);

    while (k--) {
        ll s;
        cin >> s;

        ll l = 0, r = n - 1;
        ll diff = INF;

        while (l < m && r >= 0) {
            ll now = abs(a[l] + b[r] - s);
            if (now < diff)
                diff = now;
            if (a[l] + b[r] < s)
                l++;
            else
                r--;
        }

        cout << diff << '\n';
    }
}
