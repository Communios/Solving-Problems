#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    while (n--) {
        ll a, b;
        cin >> a >> b;

        ll t = __gcd(a, b);

        a /= t;
        b /= t;

        cout << a * b << '\n';
    }
}
