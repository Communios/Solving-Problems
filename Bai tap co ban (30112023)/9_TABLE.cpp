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

    ll n;
    cin >> n;

    ll sq = sqrt(n);

    ll w = 0;

    if (sq * sq != n)
        w = 1;
    else {
        cout << sq << ' ' << sq;
        return 0;
    }

    ll se = sq + w;

    if (sq * se < n) {
        sq++;
    }

    cout << sq << ' ' << se;
}
