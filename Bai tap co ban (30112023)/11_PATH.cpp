#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int q;
    cin >> q;

    while (q--) {
        ll u, v, a, b;
        cin >> u >> v >> a >> b;

        if (__gcd(u, v) == __gcd(a, b))
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
}
