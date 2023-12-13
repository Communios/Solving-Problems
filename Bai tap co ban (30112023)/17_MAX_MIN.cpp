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

    double n;
    cin >> n;

    ll mini = INT64_MAX;
    ll maxi = INT64_MIN;
    double sum = 0;

    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;

        mini = min(mini, x);
        maxi = max(maxi, x);

        sum += x;
    }
    double sought = sum / n;
    cout << sum << '\n';
    cout << sought << '\n';
    cout << mini << '\n';
    cout << maxi << '\n';
}
