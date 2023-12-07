#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <climits>
#include <cstdint>
#include <cmath>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    freopen("EQLARRAY.inp", "r", stdin);
    freopen("EQLARRAY.out", "w", stdout);

    int q;
    cin >> q;

    while (q--) {
        int n, k;
        cin >> n >> k;

        int maxi = 0;
        int s = 0;

        for (int i = 0; i < n; i++) {
            int e;
            cin >> e;

            s += e;
            maxi = max(maxi, e);
        }

        if (s % k == 0 && maxi <= (s / k))
            cout << "YES";
        else
            cout << "NO";
        cout << '\n';
    }
}
