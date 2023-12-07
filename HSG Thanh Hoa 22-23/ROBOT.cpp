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

    freopen("ROBOT.inp", "r", stdin);
    freopen("ROBOT.out", "w", stdout);

    ll x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    cout << max(abs(x1 - x2), abs(y1 - y2));
}
